#include <format>
#include <iostream>

int main() {
  int mice{};
  int brown{};
  int white{};

  std::cout << "How many brown mice do you have? ";
  std::cin >> brown;
  std::cout << "How many white mice do you have? ";
  std::cin >> white;

  mice = brown + white;

  std::cout << std::format("You have {} {} in total.\n", mice,
                           mice == 1 ? "mouse" : "mice");

  if (mice == 0) {
    return 0;
  } else if (mice == 1) {
    if (brown == 1) {
      std::cout << "It is a brown mouse";
    } else {
      std::cout << "It is a white mouse";
    }
  } else {
    std::cout << std::format("Of these mice, {} {} brown {}.\n", brown,
                             brown == 1 ? "is a" : "are",
                             brown == 1 ? "mouse" : "mice");
  }
}
