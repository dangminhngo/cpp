#include <iostream>
#include <numbers>
#include <cmath>

int main() {
  // 2 square feet pond surface for every 6 inches of fish
  const double fish_factor { 2.0 / 0.5};
  const double inches_per_foot { 12.0 };

  double fish_count {};
  double fish_length {};

  std::cout << "Enter the number of fish do you want to keep: ";
  std::cin >> fish_count;
  std::cout << "Enter the average fish length in inches: ";
  std::cin >> fish_length;
  fish_length /= inches_per_foot;
  std::cout << "\n";

  const double pond_area {fish_count * fish_length * fish_factor};
  
  const double pond_diameter { 2.0 * std::sqrt(pond_area / std::numbers::pi)};

  std::cout << "Pond diamter required for " << fish_count << " fish is " << pond_diameter << " feet.\n";
}
