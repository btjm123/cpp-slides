#include <iostream>
#include <stack>

void demo_stack() {
    std::stack<int> st;

    st.push(3);
    st.push(5);
    st.push(7);
    st.push(11);

    std::cout << "st.top()=" << st.top() << "\n";
    
    st.pop(); // No return value, unfortunately.

    std::cout << "\n";
    std::cout << "st.top()=" << st.top() << "\n\n";

    std::cout << "st.empty()=" << st.empty() << '\n';
}

int main() {
    demo_stack();
    return 0;
}
