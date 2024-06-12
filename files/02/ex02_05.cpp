#include <iostream>
#include <format>

int main() {
  // default alignment: right for numbers, left otherwise
  std::cout << std::format("{:7}|{:7}|{:7}|{:7}|{:7}\n", 1, -.2, "str", 'c', true);
  // left and right alignment + custom fill character
  std::cout << std::format("{:*<7}|{:*<7}|{:*>7}|{:*>7}|{:*>7}\n", 1, -.2, "str", 'c', true);
  // center alignment + 0 formatting option for numbers
  std::cout << std::format("{:^07}|{:^07}|{:7}|{:7}|{:7}\n", 1, -.2, "str", 'c', true);
}
