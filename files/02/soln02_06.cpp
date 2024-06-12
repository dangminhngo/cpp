#include <iostream>
#include <numbers>
#include <format>

int main() {
  std::cout << std::format("{:20} {:35} {}\n",     "Constant",            "Description",                       "Approximate Value");
  std::cout << std::format("{:20} {:35} {:.5f}...\n", "std::numbers::e",     "The base of the natural logarithm", std::numbers::e);
  std::cout << std::format("{:20} {:35} {:.5f}...\n", "std::numbers::pi",    "pi",                                std::numbers::pi);
  std::cout << std::format("{:20} {:35} {:.5f}...\n", "std::numbers::sqrt2", "Square root of 2",                  std::numbers::sqrt2);
  std::cout << std::format("{:20} {:35} {:.3f}...\n", "std::numbers::phi",   "The golden ration constant",        std::numbers::phi);
}
