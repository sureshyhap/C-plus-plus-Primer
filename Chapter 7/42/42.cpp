#include <vector>
#include <string>

class Book {
public:
  Book(std::string t, std::string a, std::string p) : title(t), author(a), publisher(p) {}
  Book() : Book("", "", "") {}
  Book(std::string t) : Book(t, "",  "") {}
private:
  class Page {
  public:
    std::string contents;
  };
  std::vector<Page*> book;
  std::string title, author, publisher;
};
