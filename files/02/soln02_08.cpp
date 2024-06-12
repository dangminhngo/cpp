#include <iostream>
#include <format>

int main() {
  unsigned a {};
  unsigned b {};
  std::cout << "Enter 2 positive integers: ";
  std::cin >> a >> b;
  unsigned larger {( a * (a / b) + b * (b / a)) /  (a / b + b / a)};
  unsigned smaller { (a * (b / a) + b * (a / b)) / (a / b + b / a)};
  std::cout << std::format("The larger integer is {}. The smaller is {}.", larger, smaller);
}
