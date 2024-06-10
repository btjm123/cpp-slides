#include <vector>
#include <iostream>
#include <algorithm>

template <typename T>
void print(const std::vector<T> &v)
{
    for (const T &element : v)
    {
        std::cout << element << ' ';
    }
    std::cout << '\n';
}

void demo_vector()
{
    // (1) initalization
    std::vector<int> arr{1, 2, 3, 4, 5};
    std::vector<int> v;
    v.assign(5, 0);

    // (2) Indexing
    std::cout << '\n';
    std::cout << arr[1] << '\n';

    // (3) Iterating through elements
    std::cout << '\n';
    std::cout << "The elements in arr are:\n";
    for (const int &element : arr)
        std::cout << element << '\n';

    // (4) Appending Elements
    std::cout << '\n';
    std::cout << "Before pushing, arr.back()=" << arr.back() << "\n";
    arr.push_back(10);
    std::cout << "After pushing, arr.back()=" << arr.back() << "\n";
    arr.pop_back();
    std::cout << "After popping, arr.back()=" << arr.back() << "\n";

    // (5) Inserting into an arbitrary index (linear time complexity)
    std::cout << '\n';
    v.insert(v.begin(), 13);
    print(v);
    v.insert(v.begin() + 2, 17);
    std::cout << "After insertion, v looks like:" << '\n';
    print(v);

    // (6) Erasing
    std::cout << '\n';
    std::cout << "After erasing by value 0:" << '\n';
    auto it = std::find(v.begin(), v.end(), 0);
    if (it != v.end())
        v.erase(it);
    print(v);

    std::cout << "After erasing by index 1:" << '\n';
    v.erase(v.begin() + 1);
    print(v);

    std::cout << "After erasing all values 0:" << '\n';
    v.erase(std::remove(v.begin(), v.end(), 0), v.end());
    print(v);

    // (7) Other useful
    std::cout << '\n';
    std::cout << "v.front()=" << v.front() << '\n';
    std::cout << "v.empty()=" << v.empty() << '\n';
}

int main()
{
    demo_vector();
}
