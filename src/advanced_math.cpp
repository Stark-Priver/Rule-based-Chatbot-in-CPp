//
// Created by priver on 12/18/24.
//
// advanced_math.cpp
//TODO  to fix some bugs i handle the bugs in quadratic equation
#include <iostream>
#include <sstream>
#include <regex>
#include <cmath>
#include <stdexcept>
#include "advanced_math.h"

// Function to parse a quadratic equation string and extract coefficients
bool parseQuadraticEquation(const std::string& equation, double& a, double& b, double& c) {
    // Update regex to handle signs, spaces, and decimal values
    std::regex eq_pattern("([+-]?\\d*\\.?\\d+)x\\^2\\s*([+-]?\\d*\\.?\\d+)x\\s*([+-]?\\d*\\.?\\d+)\\s*=\\s*([+-]?\\d*\\.?\\d+)");
    std::smatch match;

    if (std::regex_search(equation, match, eq_pattern) && match.size() == 5) {
        a = std::stod(match[1].str());
        b = std::stod(match[2].str());
        c = std::stod(match[3].str()) - std::stod(match[4].str()); // Adjust for the right-hand side constant
        return true;
    }
    return false;
}

// Function to solve a quadratic equation ax^2 + bx + c = 0 using the quadratic formula
void solveQuadratic(double a, double b, double c) {
    if (a == 0) {
        throw std::invalid_argument("Not a quadratic equation. The coefficient 'a' cannot be zero.");
    }

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double x1 = (-b + std::sqrt(discriminant)) / (2 * a);
        double x2 = (-b - std::sqrt(discriminant)) / (2 * a);
        std::cout << "The equation has two real solutions: x1 = " << x1 << " and x2 = " << x2 << std::endl;
    } else if (discriminant == 0) {
        double x = -b / (2 * a);
        std::cout << "The equation has one real solution: x = " << x << std::endl;
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = std::sqrt(-discriminant) / (2 * a);
        std::cout << "The equation has two complex solutions: x1 = " << realPart << " + " << imaginaryPart << "i and x2 = " << realPart << " - " << imaginaryPart << "i" << std::endl;
    }
}
