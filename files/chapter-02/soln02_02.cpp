#include <iostream>
#include <numbers>
#include <cmath>
#include <format>

int main() {
  double radius {};
  std::cout << "Enter the radius of the circle: ";
  std::cin >> radius;

  double area { std::numbers::pi * std::pow(radius, 2)};

  std::cout << std::format("The area of the circle is {:.2f}\n", area);
}
