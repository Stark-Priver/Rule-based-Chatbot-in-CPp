#include "utilities.h"
#include <sstream>
#include <stack>
#include <cctype>
#include <cmath>

double performOperation(double a, double b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b == 0) throw std::runtime_error("Division by zero");
            return a / b;
        default: throw std::invalid_argument("Invalid operator");
    }
}

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

double calculate(const std::string& expression) {
    std::stack<double> values;
    std::stack<char> operators;

    for (size_t i = 0; i < expression.length(); ++i) {
        if (isspace(expression[i])) continue;

        // If the current character is a number
        if (isdigit(expression[i]) || expression[i] == '.') {
            std::stringstream ss;
            while (i < expression.length() && (isdigit(expression[i]) || expression[i] == '.')) {
                ss << expression[i];
                i++;
            }
            values.push(std::stod(ss.str()));
            i--; // Step back to process next character
        }
        // If the current character is an operator
        else if (expression[i] == '+' || expression[i] == '-' ||
                 expression[i] == '*' || expression[i] == '/') {
            while (!operators.empty() && precedence(operators.top()) >= precedence(expression[i])) {
                double b = values.top(); values.pop();
                double a = values.top(); values.pop();
                char op = operators.top(); operators.pop();
                values.push(performOperation(a, b, op));
            }
            operators.push(expression[i]);
        }
        else {
            throw std::invalid_argument("Invalid character in expression");
        }
    }

    // Perform the remaining operations
    while (!operators.empty()) {
        double b = values.top(); values.pop();
        double a = values.top(); values.pop();
        char op = operators.top(); operators.pop();
        values.push(performOperation(a, b, op));
    }

    return values.top();
}
