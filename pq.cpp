#include <iostream>
#include <queue>

void demo_priority_queue() {
    std::priority_queue<int> pq;

    pq.push(3);
    pq.push(5);
    pq.push(7);
    pq.push(11);

    std::cout << "pq.top()=" << pq.top() << "\n";
    
    pq.pop(); // No return value, unfortunately.

    std::cout << "\n";
    std::cout << "pq.top()=" << pq.top() << "\n\n";

    std::priority_queue<int, std::vector<int>, std::greater<int>> pq_min;

    pq_min.push(3);
    pq_min.push(5);
    pq_min.push(7);
    pq_min.push(11);

    std::cout << "pq_min.top()=" << pq_min.top() << "\n";
    
    pq_min.pop();

    std::cout << "\n";
    std::cout << "pq_min.top()=" << pq_min.top() << "\n";
}

int main() {
    demo_priority_queue();
    return 0;
}
