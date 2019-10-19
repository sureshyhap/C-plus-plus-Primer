#include <vector>
#include <string>

class Book {
public:
  Book() = default;
  Book(std::string t, std::string a, std::string p) : title(t), author(a), publisher(p) {}
private:
  class Page {
  public:
    std::string contents;
  };
  std::vector<Page*> book;
  std::string title, author, publisher;
};
