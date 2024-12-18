//
// Created by priver on 12/18/24.
//
#ifndef UTILITIES_H
#define UTILITIES_H

#include <string>

// Function declarations
double calculate(const std::string& expression);
double performOperation(double a, double b, char op);
int precedence(char op);

#endif // UTILITIES_H
