#include <iostream>
#include <vector>

void demo_iterator() {
	std::vector<int> v = {3, 5, 7, 11};

	// (1) Forward Iterator
  auto it = v.begin();
  std::cout << *it << "\n";
  it++;
  std::cout << *it << "\n";
  it--;
  std::cout << *it << "\n";

  it = std::prev(v.end());
  std::cout << *it << "\n";

  it = v.begin() + 2;
  std::cout << *it << "\n";
}

int main () {
	demo_iterator();	
}
