#include <deque>
#include <iostream>

template <typename T>
void print(const std::deque<T> &v)
{
    for (const T &element : v)
    {
        std::cout << element << ' ';
    }
    std::cout << '\n';
}

void demo_deque()
{
    // (1) Initialization
    std::deque<int> dq1{1, 2, 3, 4, 5};
    std::deque<int> dq2;
    dq2.assign(5, 0);

    // (2) Indexing
    std::cout << '\n';
    std::cout << dq1[0] << '\n';

    // (3) Iterating through elements
    std::cout << '\n';
    std::cout << "The elements in dq1 are:\n";
    for (const int &element : dq1)
        std::cout << element << '\n';

    // (4) Appending Elements
    std::cout << '\n';
    std::cout << "Before pushing, dq1.back()=" << dq1.back() << "\n";
    dq1.push_back(10);
    std::cout << "After pushing, dq1.back()=" << dq1.back() << "\n";
    dq1.pop_back();
    std::cout << "After popping, dq1.back()=" << dq1.back() << "\n";

    // (5) Prepending Elements
    std::cout << '\n';
    std::cout << "Before pushing, dq1.front()=" << dq1.front() << "\n";
    dq1.push_front(10);
    std::cout << "After pushing, dq1.front()=" << dq1.front() << "\n";
    dq1.pop_front();
    std::cout << "After popping, dq1.front()=" << dq1.front() << "\n";

    // (6) Other useful operations
    std::cout << '\n';
    std::cout << "dq2.empty()=" << dq2.empty() << '\n';
}

int main()
{
    demo_deque();
    return 0;
}
