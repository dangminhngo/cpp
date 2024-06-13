#include <cctype>
#include <iostream>

int main() {
  unsigned short age{};
  std::cout << "Enter age: ";
  std::cin >> age;

  if (age > 100) {
    std::cout << "Sorry. We don't need a comedian.";
    return 1;
  }

  char gender{};
  std::cout << "Enter gender ([f]emale, [m]ale, [o]thers): ";
  std::cin >> gender;

  gender = std::tolower(gender);
  if (gender != 'm' && gender != 'f' && gender != 'o') {
    std::cout << "Invalid gender choice.";
    return 1;
  }

  enum class AcademicDegree {
    None,
    Associate,
    Bachelor,
    Professional,
    Master,
    Doctor
  };
  unsigned short degree_choice{};
  std::cout << "Choose degree:\n"
            << "n - None\n"
            << "a - Associate\n"
            << "b - Bachelor\n"
            << "p - Professional\n"
            << "m - Master\n"
            << "d - Doctor\n"
            << "Your choice: ";
  std::cin >> degree_choice;

  AcademicDegree degree{AcademicDegree::None};
  switch (std::tolower(degree_choice)) {
  case 'n':
    degree = AcademicDegree::None;
    break;
  case 'a':
    degree = AcademicDegree::Associate;
    break;
  case 'b':
    degree = AcademicDegree::Bachelor;
    break;
  case 'p':
    degree = AcademicDegree::Professional;
    break;
  case 'm':
    degree = AcademicDegree::Master;
    break;
  case 'd':
    degree = AcademicDegree::Doctor;
    break;
  default:
    std::cout << "You entered an invalid choice for a degree.";
    return 1;
  }

  char yn{};

  bool married{};
  std::cout << "Are you married? (y/n) ";
  std::cin >> yn;

  if (yn == 'y' || yn == 'Y') {
    married = true;
  } else if (yn == 'n' && yn == 'N') {
    married = false;
  } else {
    std::cout << "You are worth to forever alone.";
    return 1;
  }

  bool speaksHindi{};
  std::cout << "Can you speak Hindi? (y/n) ";
  std::cin >> yn;

  if (yn == 'y' || yn == 'Y') {
    speaksHindi = true;
  } else if (yn == 'n' && yn == 'N') {
    speaksHindi = false;
  } else {
    std::cout << "What are you talking about? I can't catch that.";
    return 1;
  }

  bool speaksUrdu{};
  std::cout << "Can you speak Urdu? (y/n) ";
  std::cin >> yn;

  if (yn == 'y' || yn == 'Y') {
    speaksUrdu = true;
  } else if (yn == 'n' && yn == 'N') {
    speaksUrdu = false;
  } else {
    std::cout << "What are you talking about? I can't catch that.";
    return 1;
  }

  if ((age > 21 && age < 35) && gender == 'f' &&
      (degree == AcademicDegree::Master ||
       degree == AcademicDegree::Bachelor) &&
      !married && (speaksHindi || speaksUrdu)) {
    std::cout << "Congrats. Your qualifications meet our requirements."
              << std::endl;
  } else {
    std::cout << "Sorry. Your qualifications don't meet our requirements."
              << std::endl;
  }
}
