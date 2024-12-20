//
// Created by priver on 12/18/24.
//

#ifndef SPEECH_RECOGNITION_H
#define SPEECH_RECOGNITION_H

#include <string>

class SpeechRecognition {
public:
    static void initialize();       // Initialize the speech recognition system
    static void startListening();   // Start live speech recognition
    static void cleanup();          // Clean up resources
};

#endif // SPEECH_RECOGNITION_H
