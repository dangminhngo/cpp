#include <format>
#include <iostream>

int main() {
  int num{};
  std::cout << "Enter an integer: ";
  std::cin >> num;

  int invert{~num};
  unsigned int u_invert{static_cast<unsigned int>(invert)};

  std::cout << std::format("\nOriginal value        = {:032b}\n", num);
  std::cout << std::format("\nUnsigned invert       = {:032b}\n", u_invert);
  std::cout << std::format("\nUnsigned invert + 1   = {:032b}\n", u_invert + 1);

  std::cout << std::format("\nOriginal value        = {}\n", num);
  std::cout << std::format("\nInvert                = {}\n", invert);
  std::cout << std::format("\nInvert + 1            = {}\n", invert + 1);
}
