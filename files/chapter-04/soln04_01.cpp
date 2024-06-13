#include <iostream>

int main() {
  int first{}, second{};
  std::cout << "Enter two integers: ";
  std::cin >> first >> second;

  if (first == second) {
    std::cout << "They are the same." << std::endl;
  } else {
    std::cout << "They are not the same." << std::endl;
  }
}
