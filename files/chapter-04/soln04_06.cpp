#include <iostream>

int main() {
  int num{};
  std::cout << "Enter an integer: ";
  std::cin >> num;

  if (num <= 20) {
    std::cout << "Number is less than or equal to 20.";
  } else if (num > 20 && num <= 30) {
    std::cout << "Number is greater than 20 and less than or equal to 30.";
  } else if (num > 30 && num <= 100) {
    std::cout << "Number is greater than 30 and less than or equal to 100.";
  } else {
    std::cout << "Number is greater than 100.";
  }
}
