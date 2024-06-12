#include <iostream>
#include <cmath>
#include <format>

int main() {
  double pounds_per_kg {2.2};
  double feet_per_meter {0.3048};
  double inches_per_foot {12.0};

  unsigned weight {};
  unsigned height_feet {};
  unsigned height_inches {};

  std::cout << "Enter the weight in pounds: ";
  std::cin >> weight;
  std::cout << "\nEnter the height in feet and inches: ";
  std::cin >> height_feet >> height_inches;
  
  double bmi { (weight / pounds_per_kg) / std::pow((height_feet + height_inches / inches_per_foot) * feet_per_meter, 2)};
  std::cout << std::format("\nThe BMI is {}.", bmi);
}
