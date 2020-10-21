#include <string>
#include <iostream>

class Person {
  friend std::istream& read(std::istream& is, Person& p);
  friend std::ostream& print(std::ostream& os, const Person& p);
public:
  Person() = default;
  Person(const std::string& n, const std::string& a) : name(n), address(a) {}
  Person(std::istream& is) {
    read(is, *this);
  }
  const std::string& get_name() const {
    return name;
  }
  const std::string& get_address() const {
    return address;
  }
private:
  std::string name, address;
};

std::istream& read(std::istream& is, Person& p) {
  return is >> p.name >> p.address;
}

std::ostream& print(std::ostream& os, const Person& p) {
  return os << p.name << " " << p.address;
}

// They should be const member functions because they don't change the object.
// They only provide read access (as opposed to read/write access).
