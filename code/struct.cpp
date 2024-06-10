#include <iostream>
#include <string>

struct Person {
    std::string name;
    int height;

    friend std::ostream& operator<<(std::ostream& os, const Person& p) {
        os << p.name << " has a height of " << p.height << '\n';
        return os;
    }

    Person(): name("Nameless"), height(0) {};
    Person(int x): name("Nameless"), height(x) {};
    Person(std::string s, int x): name(s), height(x) {};
};

void demo_class() {
    Person stranger{5};
    std::cout << stranger.name << " " << stranger.height << '\n';

    Person tim{"tim", 2};
    std::cout << tim.name << " " << tim.height << '\n';

    Person ghost{};
    std::cout << ghost.name << " " << ghost.height << '\n';

    // This wouldn't work as there is no constructor that matches the arguments
    // Person jane{"Jane"};
    // std::cout << jane.name << " " << jane.height << '\n';

    // Overloading the << operator
    std::cout << '\n';
    std::cout << stranger;
    std::cout << tim;
    std::cout << ghost;
    
}

int main() {
    demo_class();
}
