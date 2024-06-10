#include <iostream>

class ListNode {
    public:
        int val;
        ListNode* next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
};

struct List {
    ListNode* head{nullptr};

    List() = default;

    List(List& other) {
        ListNode* otherPtr = other.head;
        ListNode* curHead{nullptr};
        while (otherPtr != nullptr) {
            ListNode* dummy = new ListNode(otherPtr->val);
            if (curHead == nullptr) {
                curHead = dummy;
                this->head = curHead;
            } else {
                curHead->next = dummy;
                curHead = curHead->next;
            }
            otherPtr = otherPtr->next;
        }
        
    }
    
    void prepend(int x) {
        ListNode* dummy = new ListNode(x);
        dummy->next = head;
        head = dummy;
    }

    void print() {
        ListNode* cur = head;
        while (cur != nullptr) {
					std::cout << cur->val << " ";
            cur = cur->next;
        }
				std::cout << '\n';
    }

    ~List() {
        ListNode* cur = head;
        while (cur != nullptr) {
            ListNode* dummy = cur;
            cur = cur->next;
            delete dummy;
        }
    }
};

int main() {
    List* x = new List();
    x->prepend(15);
    x->prepend(10);
    x->prepend(9);

    x->print();

    List y = *x;
    y.prepend(8);
    x->print();
    y.print();

    y.prepend(69);
    x->prepend(420);
    y.print(); x->print();
    return 0;
}
