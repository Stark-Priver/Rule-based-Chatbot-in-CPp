//
// Created by priver on 12/18/24.
//
#include "chatbot.h"
#include "utilities.h"
#include "system_controls.h"
#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

void Chatbot::startChat() {
    cout << "Chatbot: Hello! I can help you with tasks like calculations, shutting down your computer, or controlling Wi-Fi.\n";
    cout << "Type 'exit' to end the chat.\n";

    while (true) {
        cout << "\nYou: ";
        string userInput;
        getline(cin, userInput);

        if (userInput == "exit") {
            cout << "Chatbot: Goodbye! Have a great day!\n";
            break;
        }

        if (userInput.find("calculate") == 0) {
            try {
                string expression = userInput.substr(10);
                double result = calculate(expression);
                cout << "Chatbot: The result is " << result << endl;
            } catch (const exception& e) {
                cout << "Chatbot: Error in calculation: " << e.what() << endl;
            }
        } else if (userInput == "shutdown") {
            cout << "Chatbot: Shutting down the computer...\n";
            shutdownComputer();
        } else if (userInput == "restart") {
            cout << "Chatbot: Restarting the computer...\n";
            restartComputer();
        } else if (userInput == "turn on wifi") {
            cout << "Chatbot: Turning on Wi-Fi...\n";
            toggleWiFi(true);
        } else if (userInput == "turn off wifi") {
            cout << "Chatbot: Turning off Wi-Fi...\n";
            toggleWiFi(false);
        } else if (userInput == "turn on hotspot") {
            cout << "Chatbot: Turning on the hotspot...\n";
            turnOnHotspot();
        } else {
            cout << "Chatbot: I'm not sure I understand. Try asking something else!\n";
        }
    }
}
