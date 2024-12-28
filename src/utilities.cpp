#include <map>
#include <string>
#include <stdexcept>
#include <stack>
#include <sstream>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include "utilities.h"

// Function to determine operator precedence
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

// Function to perform a mathematical operation
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

// Function to apply advanced mathematical functions
double applyFunction(const std::string& func, double value) {
    if (func == "sin") return sin(value);
    if (func == "cos") return cos(value);
    if (func == "tan") return tan(value);
    if (func == "log") return log(value);  // Natural log
    if (func == "sqrt") return sqrt(value);
    if (func == "exp") return exp(value);  // e^value
    if (func == "abs") return fabs(value); // Absolute value
    throw std::invalid_argument("Invalid function: " + func);
}

// Function to calculate mathematical expressions
double calculate(const std::string& expression) {
    std::stack<double> values;
    std::stack<char> operators;
    std::stack<std::string> functions;

    for (size_t i = 0; i < expression.length(); ++i) {
        if (isspace(expression[i])) continue;

        // Handle numbers
        if (isdigit(expression[i]) || expression[i] == '.') {
            std::stringstream ss;
            while (i < expression.length() && (isdigit(expression[i]) || expression[i] == '.')) {
                ss << expression[i++];
            }
            values.push(std::stod(ss.str()));
            --i; // Step back since the outer loop will increment `i`
        }

        // Handle functions (e.g., sin, cos, log)
        else if (isalpha(expression[i])) {
            std::string func;
            while (i < expression.length() && isalpha(expression[i])) {
                func += expression[i++];
            }
            functions.push(func); // Push the function name
            --i;
        }

        // Handle opening parenthesis '('
        else if (expression[i] == '(') {
            operators.push(expression[i]);
        }

        // Handle closing parenthesis ')'
        else if (expression[i] == ')') {
            // Resolve operations within parentheses
            while (!operators.empty() && operators.top() != '(') {
                double b = values.top(); values.pop();
                double a = values.top(); values.pop();
                char op = operators.top(); operators.pop();
                values.push(performOperation(a, b, op));
            }
            operators.pop(); // Remove '(' from the stack

            // Apply the function to the result (if a function exists)
            if (!functions.empty()) {
                double value = values.top(); values.pop();
                std::string func = functions.top(); functions.pop();
                values.push(applyFunction(func, value));
            }
        }

        // Handle operators (+, -, *, /)
        else {
            while (!operators.empty() && precedence(operators.top()) >= precedence(expression[i])) {
                double b = values.top(); values.pop();
                double a = values.top(); values.pop();
                char op = operators.top(); operators.pop();
                values.push(performOperation(a, b, op));
            }
            operators.push(expression[i]);
        }
    }

    // Resolve remaining operations in the project
    while (!operators.empty()) {
        double b = values.top(); values.pop();
        double a = values.top(); values.pop();
        char op = operators.top(); operators.pop();
        values.push(performOperation(a, b, op));
    }

    return values.top();
}
