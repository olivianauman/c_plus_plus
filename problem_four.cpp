#include <iostream>
#include <string>

// create the class person
class Person {
 public:
  Person();
  std::string first_name;
  std::string last_name;
  void set_first_name(std::string);
  void set_last_name(std::string);
  void say_hello();
  void name();
};

// create the constructor
Person::Person() {
  first_name = " ";
  last_name = " ";
}

// set_first_name() function
void Person::set_first_name(std::string f_name) { first_name = f_name; }

// set_last_name() function
void Person::set_last_name(std::string l_name) { last_name = l_name; }

// say_hello() function
void Person::say_hello() {
  std::cout << "Hello! My name is " << first_name << " " << last_name
            << std::endl;
}

// name() function
void Person::name() {
  std::cout << first_name << " " << last_name << std::endl;
}

int main() {
  Person bob;
  bob.set_first_name("Bob");
  bob.set_last_name("Smith");
  bob.say_hello();
  return 0;
}
