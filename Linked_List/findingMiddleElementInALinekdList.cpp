// TC : O(N)  SC : O(1)
// Used Slow and Fast pointer Approach

#include <iostream>

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

int getMiddle(Node* head) {
    // Step 1: Take two pointers slow and fast
    Node* slow = head;
    Node* fast = head;

    // Step 2: Move slow by 1 step and fast by 2 steps until fast reaches the end
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Step 3: After step 2, the position at which slow is present will be the middle, so just return its data
    return slow->data;
}

int main() {
    // Sample input 1: Odd number of elements
    Node* head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);
    head1->next->next->next = new Node(4);
    head1->next->next->next->next = new Node(5);

    int middle1 = getMiddle(head1);
    std::cout << "Middle element of Sample input 1: " << middle1 << std::endl;

    // Sample input 2: Even number of elements
    Node* head2 = new Node(1);
    head2->next = new Node(2);
    head2->next->next = new Node(3);
    head2->next->next->next = new Node(4);
    head2->next->next->next->next = new Node(5);
    head2->next->next->next->next->next = new Node(6);

    int middle2 = getMiddle(head2);
    std::cout << "Middle element of Sample input 2: " << middle2 << std::endl;

    // Clean up the memory
    delete head1;
    delete head2;

    return 0;
}
