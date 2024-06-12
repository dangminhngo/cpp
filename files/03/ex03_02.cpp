#include <iostream>
#include <format>

int main() {
  enum class Day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
  Day yesterday { Day::Monday }, tody { Day::Tuesday }, tomorrow {Day::Wednesday};
  const Day poet_days { Day::Friday };
}
