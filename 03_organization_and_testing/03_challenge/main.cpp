#include <iostream>
#include "math_operations.h"

int main() {
  double a;
  double b;
  double result;
  char math_operator;
  std::cout << "Enter a calculation: "; 
  std::cin >> a >> math_operator >> b;

  switch (math_operator) {
    case '+':
      result = MathOps::addition(a, b);
      break;
    case '-':
      result = MathOps::subtraction(a, b);
      break;
    case '*':
      result = MathOps::multiplication(a, b);
      break;
    case '/':
      result = MathOps::division(a, b);
      break;
  }

  std::cout << "Result: " << result << std::endl;
}
