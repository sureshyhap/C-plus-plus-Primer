#include <iostream>
#include <string>

inline std::string make_plural(size_t ctr, const std::string& word, const std::string& ending = "s");

int main(int argc, char* argv[]) {
  std::string s1_singular = make_plural(1, "success", "es");
  std::string s1_plural = make_plural(2, "success", "es");
  std::string s2_singular = make_plural(1, "failure");
  std::string s2_plural = make_plural(2, "failure");
  std::cout << s1_singular << " " << s1_plural << " "
	    << s2_singular << " " << s2_plural;
  return 0;
}

inline std::string make_plural(size_t ctr, const std::string& word, const std::string& ending) {
  return (ctr > 1) ? word + ending : word;
}
