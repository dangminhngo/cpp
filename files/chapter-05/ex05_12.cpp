#include <format>
#include <iostream>

int main() {
  size_t count{};
  std::cout << "How many heights will you enter? ";
  std::cin >> count;
  int heights[count];

  size_t entered{};
  while (entered < count) {
    std::cout << "Enter a height (in inches): ";
    std::cin >> heights[entered];
    if (heights[entered] > 0) {
      ++entered;
    } else {
      std::cout << "A height must be positive - try again.\n";
    }
  }

  unsigned total{};
  for (size_t i{}; i < count; ++i) {
    total += heights[i];
  }
  std::cout << std::format("The average height is {:.1f}\n",
                           static_cast<float>(total) / count);
}
