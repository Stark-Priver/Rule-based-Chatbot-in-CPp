#include "speech_recognition.h"
#include <pocketsphinx.h>
#include <iostream>
#include <string>
#include <portaudio.h>  // Assuming you're using PortAudio for audio capture

using namespace std;

SpeechRecognition::SpeechRecognition() : recognizer(nullptr) {}

SpeechRecognition::~SpeechRecognition() {
    cleanup();
}

void SpeechRecognition::initialize() {
    const char* modelPath = "/home/priver/Studies/Rule based Chatbot in Cpp/cmusphinx-en-us-8khz-5.2";  // Replace with your model path
    const char* dictPath = "/home/priver/Studies/Rule based Chatbot in Cpp/cmusphinx-en-us-8khz-5.2/cmudict-en-us.dict";  // Replace with your dictionary path

    // Initialize the PocketSphinx recognizer with necessary parameters
    cmd_ln_t* config = cmd_ln_init(nullptr, ps_args(), TRUE,
        "-hmm", modelPath,       // Set the acoustic model
        "-dict", dictPath,       // Set the dictionary path
        nullptr);

    if (config == nullptr) {
        throw runtime_error("Failed to create PocketSphinx config.");
    }

    // Create a PocketSphinx decoder with the configuration
    recognizer = ps_init(config);
    if (recognizer == nullptr) {
        cmd_ln_free_r(config);
        throw runtime_error("Failed to initialize PocketSphinx recognizer.");
    }

    cout << "Speech Recognition Initialized using PocketSphinx.\n";
}

void SpeechRecognition::startListening() {
    if (recognizer == nullptr) {
        throw runtime_error("Recognizer is not initialized.");
    }

    // Open the microphone stream for live audio input using PortAudio
    PaStream* stream = nullptr;
    PaError err = Pa_OpenDefaultStream(&stream, 1, 0, paInt16, 16000, 512, nullptr, nullptr);
    if (err != paNoError) {
        throw runtime_error("Failed to open PortAudio stream.");
    }

    err = Pa_StartStream(stream);
    if (err != paNoError) {
        throw runtime_error("Failed to start PortAudio stream.");
    }

    cout << "Listening... Say something...\n";

    // Create a buffer for capturing audio data
    const int bufferSize = 1024;
    short buffer[bufferSize];

    while (true) {
        // Read audio data from the microphone
        err = Pa_ReadStream(stream, buffer, bufferSize);
        if (err != paNoError) {
            throw runtime_error("Error reading from PortAudio stream.");
        }

        // Process the audio data with PocketSphinx
        ps_process_raw((ps_decoder_t*)recognizer, buffer, bufferSize, FALSE, FALSE);

        // Get the recognition result (hypothesis)
        const char* hyp = ps_get_hyp((ps_decoder_t*)recognizer, nullptr);  // Get the hypothesis (recognized speech)

        if (hyp != nullptr) {
            cout << "Recognized: " << hyp << endl;

            // If a recognized command matches "shutdown", exit the loop
            if (string(hyp) == "shutdown") {
                cout << "Shutting down as per the command.\n";
                break;  // Exit the loop if the command is recognized
            }
        }
    }

    // Stop the stream after listening
    Pa_StopStream(stream);
    Pa_CloseStream(stream);
}

void SpeechRecognition::cleanup() {
    if (recognizer) {
        ps_free((ps_decoder_t*)recognizer);
        recognizer = nullptr;
    }
    cout << "Speech Recognition resources cleaned up.\n";
}

std::string SpeechRecognition::getRecognizedCommand() {
    // This function returns the last recognized command
    const char* hyp = ps_get_hyp((ps_decoder_t*)recognizer, nullptr);  // Get the hypothesis (recognized speech)
    return (hyp != nullptr) ? string(hyp) : "";
}
