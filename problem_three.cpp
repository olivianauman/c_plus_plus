#include <iostream>
#include <string>
#include <variant>

struct CharNum {
  std::variant<int, double, std::string> Inr, Dble, Chr;
  void set(int i) { int integerz = std::get<int>(Inr); }
  void set(double d) { double doublez = std::get<double>(Dble); }

  void set(const std::string& s) {
    std::string stringz = std::get<std::string>(Chr);
  }
};

int main() {
  CharNum a = {};
  return 0;
}
