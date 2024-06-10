#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
#include <iostream>

template<typename T>
void print(const std::vector<T>& v) {
    for (const T& element: v) {
        std::cout << element << ' ';
    }
    std::cout << '\n';
}

void demo_algorithms() {
    std::vector<int> v = {2, 3, 5, 7, 11, 13, 17};
    std::vector<std::string> vs = {"hello", "world", "abc", "hi", "po"};
    
    v.push_back(1); // Oh no! It's not sorted now.

    // Let's sort it.
    std::sort(v.begin(), v.end());
    std::cout << "\n" << "v[0]=" << v[0] << "\n";

    // What if I want to sort vs by length of strings? Ans: Custom Sorting!
    std::cout << '\n';
    auto cmp = [](std::string a, std::string b) {
        return a.size() < b.size();
    };
    std::cout << "Before stable sort: "; print(vs);
    std::stable_sort(vs.begin(), vs.end(), cmp);
    std::cout << "After stable sort: "; print(vs);

    // Binary Search Algorithm
    std::cout << '\n';
    std::cout << "First element greater than or equal to 5: "
            << *std::lower_bound(v.begin(), v.end(), 5) << "\n";
    std::cout << "First element greater than 5: "
            << *std::upper_bound(v.begin(), v.end(), 5) << "\n";
        
    int index = lower_bound(v.begin(), v.end(), 5)-v.begin();
    std::cout << "Index of 5 in v=" << index << "\n";
    auto nonExistentIndex = lower_bound(v.begin(), v.end(), 6);
    if (nonExistentIndex == v.end() or *nonExistentIndex != 6) {
        std::cout << "Index containing 6 does not exist!" << "\n";
    }

    // selection algorithm (i.e. quickselect, but optimized)
    std::nth_element(v.begin(), v.begin() + 1, v.end());

    // permutes the range into the next greater permutation
    std::next_permutation(v.begin(), v.end());

    auto sum = std::accumulate(v.begin(), v.end(), 0);
    std::cout << "\n" << "sum=" << sum << "\n";
}

int main() {
    demo_algorithms();
}
