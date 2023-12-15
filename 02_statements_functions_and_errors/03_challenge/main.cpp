#include<iostream>
#include<cmath>

double power(double base, double exponent = 2) {
  return std::pow(base, exponent);
}

int main() {
  double answer {power(3, 4)};
  std::cout << answer << std::endl;
  return 0;
}
