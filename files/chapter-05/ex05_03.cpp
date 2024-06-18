#include <format>
#include <iostream>
#include <numbers>

int main() {
  const size_t values_per_line{3};
  size_t values_current_line{};
  for (double radius{0.2}; radius <= 3.0; radius += 0.2) {
    const auto area = std::numbers::pi * radius * radius;
    std::cout << std::format("radius = {:4.2f}, area = {:5.2f}; ", radius,
                             area);
    if (++values_current_line == values_per_line) {
      std::cout << std::endl;
      values_current_line = 0;
    }
  }
  std::cout << std::endl;

  // the loop ends earlier than expected because when 0.2 is added to 2.8, the
  // result is greater than 3.0, although it is very small delta.
}
