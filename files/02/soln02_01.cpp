#include <iostream>
#include <format>

int main() {
  const unsigned inches_per_foot {12};
  unsigned length {};
  std::cout << "Enter the length in inches: ";
  std::cin >> length; 
  unsigned feet {length / inches_per_foot};
  unsigned inches {length % inches_per_foot};

  std::cout << std::format("The length of {} inches converts to {} feet, {} inches.\n", length, feet, inches);
}
