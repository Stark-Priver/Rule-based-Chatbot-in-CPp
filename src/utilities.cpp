//
// Created by priver on 12/18/24.
//
#include "utilities.h"
#include <sstream>
#include <stdexcept>

double calculate(const std::string& expression) {
    std::stringstream ss(expression);
    char operation;
    double num1, num2;
    ss >> num1 >> operation >> num2;

    switch (operation) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/':
            if (num2 != 0) return num1 / num2;
        throw std::runtime_error("Division by zero error!");
        default: throw std::runtime_error("Invalid operation!");
    }
}
