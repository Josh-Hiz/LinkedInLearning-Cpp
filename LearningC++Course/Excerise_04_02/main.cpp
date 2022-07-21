#include <iostream>

//Switch Statements

float operand1, operand2, result;
char operation;

int main() {

    std::cout << "Enter operand 1: " << std::endl;
    std::cin >> operand1;
    std::cout << "Enter operand 2: " << std::endl;
    std::cin >> operand2;
    std::cout << "Choose operation: + - * / " << std::endl;
    std::cin >> operation;

    switch(operation){
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '/':
            result = operand1 / operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        default:
            result = operand1 + operand2;
            break;
    }

    std::cout << "The result is: " << result <<  std::endl;

    return 0;
}
