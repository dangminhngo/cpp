#include <cctype>
#include <format>
#include <iostream>

int main() {
  char ch{};
  std::cout << "Enter a letter: ";
  std::cin >> ch;

  if (std::islower(ch)) {
    std::cout << "The letter is a lowercase letter.\n";
  } else {
    std::cout << "The letter is an uppercase letter.\n";
  }

  ch = std::tolower(ch);
  if (ch == 'a' | ch == 'e' | ch == 'o' | ch == 'u' | ch == 'i') {
    std::cout << "The letter is a vowel.\n";
  } else {
    std::cout << "The letter is a consonant.\n";
  }

  std::cout << std::format("The letter {} is written in binary {:08b}.\n", ch,
                           ch);

  // without std::format, use bit shift operators to print word by word
  std::cout << "The letter " << ch << " is written in binary "
            << ((ch & (1u << 7)) >> 7) << ((ch & (1u << 6)) >> 6)
            << ((ch & (1u << 5)) >> 5) << ((ch & (1u << 4)) >> 4)
            << ((ch & (1u << 3)) >> 3) << ((ch & (1u << 2)) >> 2)
            << ((ch & (1u << 1)) >> 1) << (ch & 1u) << ".\n";
}
