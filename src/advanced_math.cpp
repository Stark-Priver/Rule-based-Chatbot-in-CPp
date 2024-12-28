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

using  namespace std;

// Function to parse the equation string and extract coefficients
bool parseQuadraticEquation(const string& equation, double& a, double& b, double& c) {
    regex eq_pattern("([+-]?\\d*)X\\^2\\s*([+-]?\\d*)X\\s*([+-]?\\d+)\\s*=\\s*(-?\\d+)");
    smatch match;

    if (regex_search(equation, match, eq_pattern)) {
        // Extract coefficients from the regex match groups
        a = (match[1].str().empty() || match[1].str() == "+") ? 1 : (match[1].str() == "-") ? -1 : stoi(match[1].str());
        b = (match[2].str().empty() || match[2].str() == "+") ? 1 : (match[2].str() == "-") ? -1 : stoi(match[2].str());
        c = stoi(match[3].str()) - stoi(match[4].str());  // Move the right-hand side to the left-hand side

        return true;
    }
    return false;
}
// Function to solve a quadratic equation ax^2 + bx + c = 0 using the quadratic formula

void solveQuadratic(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "Root is real and same." << endl;
        cout << "Root = " << root << endl;
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }
}
