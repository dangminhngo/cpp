#include <format>
#include <iostream>

int main() {
  char a{}, b{}, c{}, d{};
  std::cout << "Enter 4 characters by spaces: ";
  std::cin >> a >> b >> c >> d;
  unsigned pack{(static_cast<unsigned>(a) << 24) |
                (static_cast<unsigned>(b) << 16) |
                (static_cast<unsigned>(c) << 8) | static_cast<unsigned>(d)};
  std::cout << std::format("\nPack value            = {:08x}\n", pack);
  std::cout << std::format("The fourth character    = {}\n",
                           static_cast<char>(pack & 0xFF));
  std::cout << std::format("The third character     = {}\n",
                           static_cast<char>((pack & 0xFF00) >> 8));
  std::cout << std::format("The second character    = {}\n",
                           static_cast<char>((pack & 0xFF0000) >> 16));
  std::cout << std::format("The first character     = {}\n",
                           static_cast<char>((pack & 0xFF000000) >> 24));
}
