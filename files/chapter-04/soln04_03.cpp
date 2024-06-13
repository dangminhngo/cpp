#include <compare>
#include <format>
#include <iostream>

int main() {
  double num{};
  std::cout << "Enter a number: ";
  std::cin >> num;

  if (num > 0 && num < 100) {
    std::cout << std::format("The number {} is between 0 and 100.\n", num);
    const auto comparison{num <=> 50};
    if (comparison == std::strong_ordering::greater) {
      std::cout << std::format("The number {} is greater than 50.", num);
    } else if (comparison == std::strong_ordering::less) {
      std::cout << std::format("The number {} is less than 50.", num);
    } else {
      std::cout << std::format("The number {} is equal to 50.", num);
    }
  } else {
    std::cout << std::format("The number {} is out of range.", num);
  }
}
