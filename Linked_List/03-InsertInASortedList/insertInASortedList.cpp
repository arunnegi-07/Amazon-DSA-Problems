// TC : O(N)  SC : O(1)

#include <bits/stdc++.h>

// Definition of a Node in a linked list
struct Node {
    int data;
    Node* next;

    // Constructor
    Node(int data) : data(data), next(nullptr) {}
};

// Function to insert a node in a sorted linked list
Node* sortedInsert(Node* head, int data) {
    // Creating a node with the given data
    Node* temp = new Node(data);

    // Base case: if the linked list is empty
    if (head == nullptr) {
        head = temp;
        return head;
    }

    // If the data should be inserted at the beginning
    if (head->data >= temp->data) {
        temp->next = head;
        head = temp;
        return head;
    }

    // Finding the appropriate position to insert the node
    Node* curr = head;
    while (curr->next != nullptr && curr->next->data < data) {
        curr = curr->next;
    }

    // Inserting the data
    temp->next = curr->next;
    curr->next = temp;

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
    // Creating the first linked list: 1 -> 3 -> 5 -> 7
    Node* head1 = new Node(1);
    head1->next = new Node(3);
    head1->next->next = new Node(5);
    head1->next->next->next = new Node(7);

    // Inserting a new node with data 4 into the first linked list
    head1 = sortedInsert(head1, 4);

    std::cout << "Modified linked list 1: ";
    printLinkedList(head1);

    // Creating the second linked list: 10 -> 20 -> 30 -> 40
    Node* head2 = new Node(10);
    head2->next = new Node(20);
    head2->next->next = new Node(30);
    head2->next->next->next = new Node(40);

    // Inserting a new node with data 25 into the second linked list
    head2 = sortedInsert(head2, 25);

    std::cout << "Modified linked list 2: ";
    printLinkedList(head2);

    return 0;
}
