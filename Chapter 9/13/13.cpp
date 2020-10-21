#include <iostream>
#include <vector>
#include <list>

int main(int argc, char* argv[]) {
  std::list<int> l {1, 2, 3, 4, 5};
  std::vector<int> v {10, 20, 30, 40, 50};
  std::vector<double> vec(l.begin(), l.end());
  std::vector<double> vec2(v.begin(), v.end());

  for (std::vector<double>::const_iterator cit = vec2.cbegin();
       cit != vec2.end(); ++cit) {
    std::cout << *cit << ' ';


  }
  std::cout << '\n';
  
  return 0;
}
