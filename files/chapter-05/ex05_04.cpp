#include <format>
#include <iostream>

int main() {
  unsigned int limit{};
  std::cout << "This program calculates n! and the sum of the integers up to n "
               "for values 1 to limit.\n";
  std::cout << "What upper limit for n would you like? ";
  std::cin >> limit;

  std::cout << std::format("{:>8} {:>8} {:>20}\n", "integer", "sum",
                           "factorial");

  for (unsigned long long n{1}, sum{}, factorial{1}; n <= limit; ++n) {
    sum += n;
    factorial *= n;
    std::cout << std::format("{:>8} {:>8} {:>20}\n", n, sum, factorial);
  }
}
