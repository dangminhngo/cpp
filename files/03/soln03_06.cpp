#include <format>
#include <iostream>

int main() {
  int a{}, b{};
  std::cout << "Enter two integers: ";
  std::cin >> a >> b;
  std::cout << std::format("\nOriginal a = {}, b = {}\n", a, b);
  a ^= b;
  b ^= a;
  a ^= b;
  std::cout << std::format("Swapped    a = {}, b = {}", a, b);
}
