// TC : O(N)  SC : O(1)

#include <iostream>

struct Node {
    int data;
    Node* next;
};

// Function to reverse a linked list.
// Takes the head of the linked list as input and returns the head of the reversed list.
Node* reverseList(Node* head) {
    Node* current = head;
    Node* previous = nullptr;
    Node* next = nullptr;

    // Traverse through the list and reverse the pointers
    while (current != nullptr) {
        // Store the next node
        next = current->next;

        // Reverse the pointer of the current node
        current->next = previous;

        // Move pointers one step ahead
        previous = current;
        current = next;
    }

    // The new head of the reversed list is the previous node
    head = previous;

    // Return the head of the reversed list
    return head;
}

// Utility function to print the linked list
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    // Create a sample linked list
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = nullptr;

    std::cout << "Original linked list: ";
    printList(head);

    // Reverse the linked list
    head = reverseList(head);

    std::cout << "Reversed linked list: ";
    printList(head);

    return 0;
}
