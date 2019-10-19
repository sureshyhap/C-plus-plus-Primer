#include <iostream>
#include <string>

class Screen {
public:
  Screen() = default;
  Screen(std::string::size_type h, std::string::size_type w, char c) :
    height(h), width(w), contents(h * w, c) {}
  char get() const {
    return contents[cursor];
  }
  inline char get(std::string::size_type r, std::string::size_type c) const;
  Screen& move(std::string::size_type r, std::string::size_type c);
private:
  std::string::size_type height = 0, width = 0;
  std::string::size_type cursor = 0;
  std::string contents;
};

char Screen::get(std::string::size_type r, std::string::size_type c) const {
  std::string::size_type row = r * width;
  return contents[r + c];
}

inline Screen& Screen::move(std::string::size_type r, std::string::size_type c) {
    std::string::size_type row = r * width;
    cursor = row + c;
    return *this;
}

int main(int argc, char* argv[]) {
  Screen s;
  return 0;
}
