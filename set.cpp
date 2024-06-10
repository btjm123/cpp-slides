#include <set>
#include <map>
#include <iostream>

void demo_set() {
    std::set<int> s;
    std::multiset<int> ms;

    // (1) Insertion
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(5);
    s.insert(7);
    s.insert(11);
    s.insert(13);

    // (2) Size
    std::cout << "Set size is "<<s.size() << '\n';

     // (1.5) Insertion (for multiset)
    ms.insert(3);
    ms.insert(3);
    ms.insert(3);
    ms.insert(5);
    ms.insert(7);
    ms.insert(11);
    ms.insert(13);

    // (2.5) Size (for multiset)
    std::cout << '\n';
    std::cout << "Multiset size is "<<ms.size() << '\n';

    // (2) Binary search
    std::cout << '\n';
    auto it = s.lower_bound(3);
    std::cout << "s.lower_bound(3)=" << *it << "\n";

    std::cout << "\n";
    it = s.upper_bound(11);
    std::cout << "s.upper_bound(11)=" << *it << "\n";

    std::cout << "\n";
    it = s.lower_bound(15);
    if (it == s.end()) {
        std::cout << "s.lower_bound(15)=s.end()" << "\n";
    } else {
        std::cout << "s.lower_bound(15)=" << *it << "\n";
    }

    // (3) Other misc 
    std::cout << '\n';
    if (!s.empty()) {
        std::cout << "Smallest element is " << *s.begin() << '\n';
        std::cout << "Largest element is " << *(s.rbegin()) << '\n';
    }
}

int main() {
    demo_set();
}
