#include <iostream>
#include <cmath>
#include <numbers>
#include <format>

int main() {
  const unsigned inches_per_foot {12};
  unsigned height {};
  unsigned distance_feet {};
  unsigned distance_inches {};
  unsigned angle {};

  std::cout << "Enter the height in inches: ";
  std::cin >> height;
  std::cout << "\nEnter the distance in feet and inches: ";
  std::cin >> distance_feet >> distance_inches;
  std::cout << "\nEnter the angle in degrees: ";
  std::cin >> angle;

  double tree_height { height + (distance_feet * inches_per_foot + distance_inches) * std::tan(angle * std::numbers::pi / 180)};

  std::cout << std::format("\nThe height of the tree is {:.2f} inches.", tree_height);
}
