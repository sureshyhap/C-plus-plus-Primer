#include <iostream>
#include <string>

class Screen {
public:
  Screen() = default;
  Screen(std::string::size_type h, std::string::size_type w) :
    height(h), width(w), contents(h * w, ' ') {}
  Screen(std::string::size_type h, std::string::size_type w, char c) :
    height(h), width(w), contents(h * w, c) {}
  char get() const {
    return contents[cursor];
  }
  inline char get(std::string::size_type r, std::string::size_type c) const;
  inline Screen set(char c);
  inline Screen set(std::string::size_type r, std::string::size_type col, char c);
  Screen move(std::string::size_type r, std::string::size_type c);
  Screen display(std::ostream& os) {
    do_display(os);
    return *this;
  }
  const Screen display(std::ostream& os) const {
    do_display(os);
    return *this;    
  }
private:
  void do_display(std::ostream& os) const {
    os << contents;
  }
  std::string::size_type height = 0, width = 0;
  std::string::size_type cursor = 0;
  std::string contents;
};

char Screen::get(std::string::size_type r, std::string::size_type c) const {
  std::string::size_type row = r * width;
  return contents[r + c];
}

Screen Screen::set(char c) {
  contents[cursor] = c;
  return *this;
}

Screen Screen::set(std::string::size_type r, std::string::size_type col, char c) {
  contents[r * width + col] = c;
  return *this;
}

inline Screen Screen::move(std::string::size_type r, std::string::size_type c) {
    std::string::size_type row = r * width;
    cursor = row + c;
    return *this;
}

int main(int argc, char* argv[]) {
  Screen myScreen(5, 5, 'X');
  myScreen.move(4, 0).set('#').display(std::cout);
  std::cout << "\n";
  myScreen.display(std::cout);
  std::cout << "\n";
  return 0;
}
