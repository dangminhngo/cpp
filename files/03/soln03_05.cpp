#include <format>
#include <iostream>

int main() {
  enum class Color : unsigned {
    Red = 0xFF0000,
    Green = 0xFF00,
    Yellow = 0xFFFF00,
    Purple = 0xA020F0,
    Blue = 0xFF,
    Black = 0u,
    White = 0xFFFFFF
  };
  Color yellow{Color::Yellow};
  Color purple{Color::Purple};
  Color green{Color::Green};

  unsigned red_mask{0xFF0000};
  unsigned green_mask{0xFF00};
  unsigned blue_mask{0xFF};

  std::cout << std::format("\nYellow    = {:0x}",
                           static_cast<unsigned>(yellow));
  std::cout << std::format("\nYellow R  = {:02x}",
                           (static_cast<unsigned>(yellow) & red_mask) >> 16);
  std::cout << std::format("\nYellow G  = {:02x}",
                           (static_cast<unsigned>(yellow) & green_mask) >> 8);
  std::cout << std::format("\nYellow B  = {:02x}\n",
                           (static_cast<unsigned>(yellow) & blue_mask));

  std::cout << std::format("\nPurple    = {:0x}",
                           static_cast<unsigned>(purple));
  std::cout << std::format("\nPurple R  = {:02x}",
                           (static_cast<unsigned>(purple) & red_mask) >> 16);
  std::cout << std::format("\nPurple G  = {:02x}",
                           (static_cast<unsigned>(purple) & green_mask) >> 8);
  std::cout << std::format("\nPurple B  = {:02x}\n",
                           (static_cast<unsigned>(purple) & blue_mask));

  std::cout << std::format("\nGreen     = {:0x}", static_cast<unsigned>(green));
  std::cout << std::format("\nGreen R   = {:02x}",
                           (static_cast<unsigned>(green) & red_mask) >> 16);
  std::cout << std::format("\nGreen G   = {:02x}",
                           (static_cast<unsigned>(green) & green_mask) >> 8);
  std::cout << std::format("\nGreen B   = {:02x}",
                           (static_cast<unsigned>(green) & blue_mask));
}
