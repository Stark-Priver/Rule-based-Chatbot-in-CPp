#include "chatbot.h"
#include "utilities.h"
#include "system_controls.h"
#include "advanced_math.h"
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

        // Handle simple calculations (e.g., basic arithmetic)
        if (userInput.find("calculate") == 0 && userInput.find("quadratic") == string::npos) {
            try {
                string expression = userInput.substr(10);  // Remove "calculate " from the input
                double result = calculate(expression);  // Use the 'calculate' function from utilities.cpp
                cout << "Chatbot: The result is " << result << endl;
            } catch (const exception& e) {
                cout << "Chatbot: Error in calculation: " << e.what() << endl;
            }
        }
        // Handle quadratic equation queries like "calculate ax^2 + bx + c = 0"
        else if (userInput.find("calculate") != string::npos && userInput.find("quadratic") != string::npos) {
            double a, b, c; // Variables to hold the coefficients of the quadratic equation

            if (parseQuadraticEquation(userInput, a, b, c)) {
                cout << "Chatbot: Solving the equation " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
                try {
                    solveQuadratic(a, b, c);  // Call the quadratic solver from advanced_math.cpp
                } catch (const exception& e) {
                    cout << "Error: " << e.what() << endl;
                }
            } else {
                cout << "Chatbot: I couldn't parse the equation. Please try again with the correct format." << endl;
            }
        }
        // Handle other system control commands
        else if (userInput == "shutdown") {
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
        }
        // Handle unrecognized input
        else {
            cout << "Chatbot: I'm not sure I understand. Try asking something else!\n";
        }
    }
}
