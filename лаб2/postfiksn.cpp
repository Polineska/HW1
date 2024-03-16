#include <iostream>
#include <stack>
#include <sstream>

int evaluatePostfixExpression(const std::string& expression) {
    std::stack<int> stack;
    std::istringstream iss(expression);

    std::string token;
    while (iss >> token) {
        if (token == "+" || token == "-" || token == "*") {
            int operand2 = stack.top();
            stack.pop();
            int operand1 = stack.top();
            stack.pop();

            if (token == "+") {
                stack.push(operand1 + operand2);
            }
            else if (token == "-") {
                stack.push(operand1 - operand2);
            }
            else if (token == "*") {
                stack.push(operand1 * operand2);
            }
        }
        else {
            stack.push(std::stoi(token));
        }
    }

    return stack.top();
}

int main() {
    std::string expression;
    std::getline(std::cin, expression);

    int result = evaluatePostfixExpression(expression);
    std::cout << result << std::endl;

    return 0;
}