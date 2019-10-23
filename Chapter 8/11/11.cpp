/*
  You would have strm.str(s)
 */

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

struct Person_Info {
  std::string name;
  std::vector<std::string> phones;
};

int main(int argc, char* argv[]) {
  std::string line, word;
  std::vector<Person_Info> people;
  //  std::istringstream record;
  while (std::getline(std::cin, line)) {
    Person_Info info;
    //    record.str(line);
    std::istringstream record(line);
    record >> info.name;
    while (record >> word) {
      info.phones.push_back(word);
    }
    people.push_back(info);
  }
  for (const auto& person : people) {
    std::cout << person.name << " ";
    for (const auto& phone : person.phones) {
      std::cout << phone << " ";
    }
    std::cout << std::endl;
  }
  return 0;
}
