// speech_recognition.h
#ifndef SPEECH_RECOGNITION_H
#define SPEECH_RECOGNITION_H

#include <string>

class SpeechRecognition {
public:
    SpeechRecognition();
    ~SpeechRecognition();

    void initialize();
    void startListening();
    void cleanup();

    std::string getRecognizedCommand(); // This will return the recognized speech

private:
    void* model;
    void* recognizer;
    void* stream;
};

#endif //SPEECH_RECOGNITION_H
