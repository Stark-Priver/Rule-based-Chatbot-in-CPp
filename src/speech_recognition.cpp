//
// Created by priver on 12/18/24.
//
// speech_recognition.cpp

#include "speech_recognition.h"
#include <vosk_api.h>
#include <portaudio.h>
#include <iostream>
#include <string>

#define SAMPLE_RATE 16000
#define FRAMES_PER_BUFFER 4000

using namespace std;

static VoskModel* model = nullptr;
static VoskRecognizer* recognizer = nullptr;
static PaStream* stream = nullptr;

void SpeechRecognition::initialize() {
    const char* modelPath = "vosk-model/vosk-model-small-en-us-0.15/";

    // Load Vosk model
    model = vosk_model_new(modelPath);
    if (!model) {
        throw runtime_error("Failed to load Vosk model.");
    }

    // Create recognizer with the given model
    recognizer = vosk_recognizer_new(model, SAMPLE_RATE);
    if (!recognizer) {
        vosk_model_free(model);
        throw runtime_error("Failed to create Vosk recognizer.");
    }

    // Initialize PortAudio
    PaError err = Pa_Initialize();
    if (err != paNoError) {
        cleanup();
        throw runtime_error("PortAudio initialization failed: " + string(Pa_GetErrorText(err)));
    }

    // Open PortAudio default stream for microphone input
    err = Pa_OpenDefaultStream(&stream, 1, 0, paInt16, SAMPLE_RATE, FRAMES_PER_BUFFER, nullptr, nullptr);
    if (err != paNoError) {
        cleanup();
        throw runtime_error("PortAudio error: " + string(Pa_GetErrorText(err)));
    }

    cout << "Speech Recognition Initialized.\n";
}

void SpeechRecognition::startListening() {
    if (!stream) {
        throw runtime_error("Audio stream is not initialized.");
    }

    PaError err = Pa_StartStream(stream);
    if (err != paNoError) {
        throw runtime_error("PortAudio error: " + string(Pa_GetErrorText(err)));
    }

    cout << "Listening... Say 'exit' to stop.\n";

    short buffer[FRAMES_PER_BUFFER];
    while (true) {
        // Read audio from PortAudio stream
        err = Pa_ReadStream(stream, buffer, FRAMES_PER_BUFFER);
        if (err && err != paInputOverflowed) {
            cerr << "PortAudio error: " << Pa_GetErrorText(err) << endl;
            break;
        }

        // Process the audio and recognize speech using Vosk
        if (vosk_recognizer_accept_waveform(recognizer, buffer, FRAMES_PER_BUFFER * sizeof(short))) {
            string result = vosk_recognizer_result(recognizer);
            cout << "Recognized: " << result << endl;

            // Check if "exit" is detected in the result
            if (result.find("exit") != string::npos) {
                cout << "Stopping voice recognition.\n";
                break;
            }
        }
    }

    Pa_StopStream(stream);  // Stop the stream after listening
}

void SpeechRecognition::cleanup() {
    // Cleanup resources to prevent memory leaks
    if (stream) {
        Pa_CloseStream(stream);
        stream = nullptr;
    }
    if (recognizer) {
        vosk_recognizer_free(recognizer);
        recognizer = nullptr;
    }
    if (model) {
        vosk_model_free(model);
        model = nullptr;
    }
    Pa_Terminate();  // Always terminate PortAudio
    cout << "Speech Recognition resources cleaned up.\n";
}

