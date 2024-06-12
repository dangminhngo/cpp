#include <iostream>

int main() {
  unsigned int yards {}, feet {}, inches {};

  // convert a distance in yards, feet, inches to inches
  std::cout << "Enter a distance as yards, feet, inches "
    << "with the three values separated by spaces: ";
  std::cin >> yards >> feet >> inches;

  const unsigned feet_per_yards {3};
  const unsigned inches_per_foot {12};

  unsigned total_inches {};
  total_inches = inches + inches_per_foot * feet + yards * feet_per_yards * inches_per_foot;
  std::cout << "This distance corresponds to " << total_inches << " inches." << std::endl;

  // convert a distance in inches to yards, feet, and inches
  std::cout << "Enter a distance in inches: ";
  std::cin >> total_inches;
  feet = total_inches / inches_per_foot;
  inches = total_inches % inches_per_foot;
  yards = feet / feet_per_yards;
  feet = feet % feet_per_yards;
  std::cout << "This distance corresponds to "
    << yards << " yards, " << feet << " feet, and " << inches << " inches." << std::endl;
}
