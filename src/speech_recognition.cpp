#include "speech_recognition.h"
#include <pocketsphinx.h>
#include <iostream>
#include <string>

using namespace std;

SpeechRecognition::SpeechRecognition() : recognizer(nullptr) {}

SpeechRecognition::~SpeechRecognition() {
    cleanup();
}

void SpeechRecognition::initialize() {
    const char* modelPath = "path/to/your/model/en-us";  // Replace with your model path
    const char* dictPath = "path/to/your/model/cmudict-en-us.dict";  // Replace with your dictionary path

    // Initialize the PocketSphinx recognizer with necessary parameters
    ps_decoder_t* ps = nullptr;
    cmd_ln_t* config = cmd_ln_init(nullptr, ps_args(), TRUE,
        "-hmm", modelPath,       // Set the acoustic model
        "-dict", dictPath,       // Set the dictionary path
        nullptr);

    if (config == nullptr) {
        throw runtime_error("Failed to create PocketSphinx config.");
    }

    // Create a PocketSphinx decoder with the configuration
    ps = ps_init(config);
    if (ps == nullptr) {
        cmd_ln_free_r(config);
        throw runtime_error("Failed to initialize PocketSphinx recognizer.");
    }

    // Store the recognizer instance
    recognizer = ps;
    cout << "Speech Recognition Initialized using PocketSphinx.\n";
}

void SpeechRecognition::startListening() {
    if (recognizer == nullptr) {
        throw runtime_error("Recognizer is not initialized.");
    }

    // Open the microphone stream and start recognizing
    // You'll need to use a microphone input to get live audio for recognition
    // Example: Using PortAudio or other library to handle live audio capture

    cout << "Listening... Say something...\n";
    // Process live audio stream and recognize commands here...

    // For now, we'll simulate a simple command (You should process real audio input here)
    string result = "shutdown";  // For testing, replace with actual speech recognition result

    // Recognize the command
    if (!result.empty()) {
        cout << "Recognized: " << result << endl;
    }
}

void SpeechRecognition::cleanup() {
    if (recognizer) {
        ps_free((ps_decoder_t*)recognizer);
        recognizer = nullptr;
    }
    cout << "Speech Recognition resources cleaned up.\n";
}

std::string SpeechRecognition::getRecognizedCommand() {
    // This function will return the last recognized command
    return "shutdown";  // Simulate recognized command (Replace with actual result)
}
