#include <cctype>
#include <format>
#include <iostream>

int main() {
  double amount{};
  std::cout << "Enter the amount: ";
  std::cin >> amount;

  if (amount < 0 && amount > 10) {
    std::cout << "Invalid amount. Rejected.";
    return 1;
  }

  unsigned short cents_per_quarter{25u};
  unsigned short cents_per_dime{10u};
  unsigned short cents_per_nickel{5u};
  unsigned cents{static_cast<unsigned>(amount * 100)};

  unsigned quarters{cents / cents_per_quarter};
  cents = cents % cents_per_quarter;
  unsigned dimes{cents / cents_per_dime};
  cents = cents % cents_per_dime;
  unsigned nickels{cents / cents_per_nickel};
  unsigned pennies{cents % cents_per_nickel};

  std::cout << std::format("The amount of {:.2f} is made up by {} quarter{}, "
                           "{} dime{}, {} nickel{} and {} {}.\n",
                           amount, quarters, quarters > 1 ? "s" : "", dimes,
                           dimes > 1 ? "s" : "", nickels,
                           nickels > 1 ? "s" : "", pennies,
                           pennies > 1 ? "pennies" : "penny");
}
