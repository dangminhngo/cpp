#include <iostream>

void print(int x);

int main() {
  int answer{42};
  std::cout << "The answer to life, the universe, and everything is " << answer
            << std::endl;
  print(answer);
}

void print(int x) {
  std::cout << x << std::endl;
}
