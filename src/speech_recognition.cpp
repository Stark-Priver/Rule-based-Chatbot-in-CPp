//
// Created by priver on 12/18/24.
//
// speech_recognition.cpp

#include "speech_recognition.h"
#include <iostream>
#include <fstream>
#include <memory>
#include <vosk.h>

void listenToVoiceInput(std::string& recognizedText) {
    // Initialize Vosk model (replace with the path to your model)
    std::string model_path = "/path/to/vosk-model-small-en-us-0.15";
    vosk::Model model(model_path);

    // Create recognizer for audio stream (16000 Hz sample rate)
    std::shared_ptr<vosk::Recognizer> recognizer = std::make_shared<vosk::Recognizer>(model, 16000.0);

    // Open the microphone input (adjust path based on your system)
    std::ifstream audio_stream("/dev/audio", std::ios::binary);
    if (!audio_stream) {
        std::cerr << "Error opening audio stream\n";
        return;
    }

    char buffer[4000];
    std::string result_text;

    // Process audio input and convert it to text
    while (audio_stream.read(buffer, sizeof(buffer))) {
        if (recognizer->AcceptWaveform(buffer, sizeof(buffer))) {
            std::string result = recognizer->Result();
            std::cout << "Recognized text: " << result << std::endl;
            result_text = result;
        }
    }

    // Final result after speech input ends
    std::string final_result = recognizer->FinalResult();
    std::cout << "Final recognized text: " << final_result << std::endl;
    recognizedText = final_result;  // Return the recognized text to the caller
}
