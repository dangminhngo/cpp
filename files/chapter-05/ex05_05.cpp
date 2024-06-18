#include <format>
#include <iostream>

int main() {
  unsigned limit{};
  std::cout << "This program calculates n! and the sum of integers "
               "up to n for values 1 to limit.\n";
  std::cout << "What upper limit for n would you like? ";
  std::cin >> limit;

  std::cout << std::format("{:>8} {:>8} {:>20}\n", "integer", "sum",
                           "factorial");

  unsigned int n{};
  unsigned int sum{};
  unsigned long long factorial{1ULL};

  while (++n <= limit) {
    sum += n;
    factorial *= n;
    std::cout << std::format("{:>8} {:>8} {:>20}\n", n, sum, factorial);
  }
}
