#include <stdexcept>
#include "math_operations.h"

namespace MathOps {
double addition(const double a, const double b) {
  return a + b;
}

double subtraction(const double a, const double b) {
  return a - b;
}

double multiplication(const double a, const double b) {
  return a * b;
}

double division(const double a, const double b) {
  if (b == 0) {
    throw std::runtime_error("Division by Zero");
  }
  return a / b;
}
}  // namespace: MathOps
