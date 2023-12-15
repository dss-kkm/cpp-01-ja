#include <iostream>

int main() {
    double num1;
    double num2;
    double num3;
    double average;

    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    average = (num1 + num2 + num3) / 3;

    std::cout << "Average is: " << average << std::endl;

    return 0;
}
