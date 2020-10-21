#include <string>

class Person {
public:
  const std::string& get_name() const {
    return name;
  }
  const std::string& get_address() const {
    return address;
  }
private:
  std::string name, address;
};

// They should be const member functions because they don't change the object.
// They only provide read access (as ooposed to read/write access).
