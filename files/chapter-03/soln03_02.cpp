#include <format>
#include <iostream>

int main() {
  unsigned inches_per_foot{12};
  double shelf_length{};
  double shelf_depth{};
  unsigned box_side{};

  std::cout << "Enter the length and the depth of the shelf in feet: ";
  std::cin >> shelf_length >> shelf_depth;
  std::cout << "\nEnter the side of the box in inches: ";
  std::cin >> box_side;

  double shelf_area{shelf_length * shelf_depth * inches_per_foot *
                    inches_per_foot}; // feet -> inches
  unsigned box_area{box_side * box_side};
  unsigned maximum_boxes{static_cast<unsigned>(shelf_area / box_area)};
  std::cout << std::format("\nThe maximum number of boxes is {}\n",
                           maximum_boxes);
}
