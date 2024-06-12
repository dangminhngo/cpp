#include <format>
#include <iostream>

int main() {
  enum class Day {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
  };
  Day yesterday{Day::Monday}, today{Day::Tuesday}, tomorrow{Day::Wednesday};
  const Day poets_day{Day::Friday};

  enum class Punctuation : char {
    Comma = ',',
    Exclamation = '!',
    Question = '?'
  };
  Punctuation ch{Punctuation::Comma};

  std::cout << std::format(
      "yesterday's value is {}{} but poets_day's is {}{}\n",
      static_cast<int>(yesterday), static_cast<char>(ch),
      static_cast<int>(poets_day), static_cast<char>(Punctuation::Exclamation));

  today = Day::Thursday;
  ch = Punctuation::Question;
  tomorrow = poets_day;

  std::cout << std::format("Is today's value({}) the same as poets_day({}){}\n",
                           static_cast<int>(today), static_cast<int>(poets_day),
                           static_cast<char>(ch));

  // ch = tomorrow;
  // tomorrow = Friday;
  // today = 6;
}
