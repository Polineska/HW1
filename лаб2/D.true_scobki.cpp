#include <iostream>
#include <stack>
#include <string>

bool isBalanced(const std::string& sequence) {
    std::stack<char> stack;

    for (char bracket : sequence) {
        if (bracket == '(' || bracket == '[' || bracket == '{') {
            stack.push(bracket);
        }
        else {
            if (stack.empty()) {
                return false;
            }

            char openBracket = stack.top();
            stack.pop();

            if ((openBracket == '(' && bracket != ')') ||
                (openBracket == '[' && bracket != ']') ||
                (openBracket == '{' && bracket != '}')) {
                return false;
            }
        }
    }

    return stack.empty();
}

int main() {
    std::string sequence;
    std::cin >> sequence;

    if (isBalanced(sequence)) {
        std::cout << "yes" << std::endl;
    }
    else {
        std::cout << "no" << std::endl;
    }

    return 0;
}
