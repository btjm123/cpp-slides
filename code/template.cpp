#include <iostream>
#include <string>

// Template struct for Person
template <typename HType>
struct Person {
    std::string name;
    HType height;

    friend std::ostream& operator<<(std::ostream& os, const Person& p) {
        os << p.name << ", " << p.height;
        return os;
    }
};

template <typename HType1, typename HType2>
bool operator<(const Person<HType1>& p1, const Person<HType2>& p2) {
    return p1.height < p2.height;
}

template <class T>
T max(const T &x, const T &y) {
    return x < y ? y : x;
}

int max(int x, int y) {
    return x < y ? y : x;
}

void demo_templates() {
    Person<double> tim{"Tim", 1.59};
    std::cout << tim << "\n"; // Use the new operator<<

    Person<int> jane{"Jane", 1};
    std::cout << "\n" << (jane < tim) << "\n";

    std::cout << "\n" << "max(3, 4)=" << max(3, 4) << "\n";

    Person<double> tom{"Tom", 1.61};
    std::cout << "\n" << "Name of max(tom, tim)=" << max(tom, tim).name << "\n";
}

int main() {
    demo_templates();
}
