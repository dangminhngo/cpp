#include <format>
#include <iostream>

int main() {
  int first{}, second{};
  std::cout << "Enter two integers: ";
  std::cin >> first >> second;

  if (first <= 0 || second <= 0) {
    std::cout << "The integers must be greater than 0" << std::endl;
    return 0;
  }

  if (first > second) {
    if (first % second == 0) {
      std::cout << std::format("{} is a multiple of {}.", first, second);
      return 0;
    } else {
      std::cout << "No multiple found." << std::endl;
      return 0;
    }
  } else {
    if (second % first == 0) {
      std::cout << std::format("{} is a multiple of {}.", second, first);
      return 0;
    } else {
      std::cout << "No multiple found." << std::endl;
      return 0;
    }
  }
}
