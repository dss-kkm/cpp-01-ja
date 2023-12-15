# include<iostream>

int main() {
  int input;
  std::cout << "数字を入力してください: ";
  std::cin >> input;

  std::cout << input << "は";
  if (input > 0) {
    std::cout << "正です" << std::endl;
  } else if (input < 0) {
    std::cout << "負です" << std::endl;
  } else {
    std::cout << "ゼロです" << std::endl;
  }

  return 0;
}
