// TC : O(N)  SC : O(1)

#include<bits/stdc++.h>

// Definition of a Node in a linked list
struct Node {
    int data;
    Node* next;
};

// Function to delete the middle node of a linked list
Node* deleteMid(Node* head)
{
    // Base case
    if (head == nullptr || head->next == nullptr)
        return nullptr;

    // Setting slow and fast pointers to find the middle node
    Node* slow = head;
    Node* fast = head;
    Node* prev = nullptr;

    while (fast && fast->next) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    // Deleting the middle node
    prev->next = slow->next;
    delete slow;

    // Returning the modified list
    return head;
}

// Function to print the linked list
void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    // Creating the first linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head1 = new Node{1, nullptr};
    head1->next = new Node{2, nullptr};
    head1->next->next = new Node{3, nullptr};
    head1->next->next->next = new Node{4, nullptr};
    head1->next->next->next->next = new Node{5, nullptr};

    // Deleting the middle node of the first linked list
    head1 = deleteMid(head1);

    std::cout << "Modified linked list 1: ";
    printLinkedList(head1);

    // Creating the second linked list: 10 -> 20 -> 30 -> 40
    Node* head2 = new Node{10, nullptr};
    head2->next = new Node{20, nullptr};
    head2->next->next = new Node{30, nullptr};
    head2->next->next->next = new Node{40, nullptr};

    // Deleting the middle node of the second linked list
    head2 = deleteMid(head2);

    std::cout << "Modified linked list 2: ";
    printLinkedList(head2);

    return 0;
}
