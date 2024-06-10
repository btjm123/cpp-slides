#include <map>
#include <unordered_map>
#include <iostream>

void demo_map()
{
    std::map<int, int> m;
    std::unordered_map<int, int> um;
    // Access
    m[3] = 5;
    std::cout << "m[3]=" << m[3] << "\n";

    // Access default constructs the value if it doesn't exist
    std::cout << "\n";
    std::cout << "m[7]=" << m[7] << "\n";

    // Pro tip: to check whether a key exists inside (instead of checking for value of 0)
    std::cout << '\n';
    std::cout << "Checking if key 3 exists: " << m.count(3) << '\n';
    std::cout << "Checking if key 7 exists: " << m.count(7) << '\n';
    m.erase(m.find(7));
    std::cout << '\n';
    std::cout << "Checking if key 3 exists: " << m.count(3) << '\n';
    std::cout << "Checking if key 7 exists: " << m.count(7) << '\n';

    // Insert pairs
    std::cout << "\n";
    auto [it2, inserted] = m.insert({23, 29});
    std::cout << "Inserted " << it2->first << "->" << it2->second << "\n";

    // Iteration
    std::cout << "Key-value pairs in map:" << '\n';
    for (const auto &kv : m)
    {
        std::cout << kv.first << "->" << kv.second << '\n';
    }

    // Access without default constructing
    std::cout << "\n";
    auto it = m.find(11);
    if (it == m.end())
    {
        std::cout << "m.find(11)=m.end()\n";
    }
    else
    {
        std::cout << "m.find(11)=" << it->second << "\n";
    }

    it = m.find(3);
    if (it == m.end())
    {
        std::cout << "m.find(3)=m.end()\n";
    }
    else
    {
        std::cout << "m.find(3)=" << it->second << "\n";
    }
}

int main()
{
    demo_map();
}
