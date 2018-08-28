#include <iostream>

struct CharNum {
  enum class CharNumType { Inr, Dble, Chr };
  union CharNumValue {
    int i;
    double d;
    const char* c;
  };

  CharNumType type;
  CharNumValue value;
  void set(int i) {
    type = CharNumType::Inr;
    value.i = i;
  }
  void set(double d) {
    type = CharNumType::Dble;
    value.d = d;
  }

  void set(const std::string& s) {
    type = CharNumType::Chr;
    value.c = s.c_str();
  }

  void print_value() {
    if (type == CharNumType::Inr) {
      std::cout << value.i << std::endl;
    } else if (type == CharNumType::Dble) {
      std::cout << value.d << std::endl;
    } else if (type == CharNumType::Chr) {
      std::cout << value.c << std::endl;
    }
  }
};

int main() {
  CharNum a = {};
  a.print_value();
  return 0;
}
