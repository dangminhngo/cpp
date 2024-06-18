#include <cctype>
#include <format>
#include <iostream>

int main() {
  std::cout << std::format("{:^11}{:^11}{:^11}\n", "Character", "Hexadecimal",
                           "Decimal");

  char ch{};
  do {
    if (!std::isprint(ch)) // if it's not printable
      continue;
    std::cout << std::format("{0:^11}{0:^11x}{0:^11d}\n", ch);
  } while (ch++ < 127);
}
