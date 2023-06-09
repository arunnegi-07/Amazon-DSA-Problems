// TC : O(N)  SC : O(1)

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* reverseList(Node* head) {
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;

    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node* rotate(Node* head, int k) {
    // Step 1: Find the length of the list
    int len = 0;
    Node* ptr = head;
    while (ptr) {
        len++;
        ptr = ptr->next;
    }

    // Step 2: Breaking our list into two parts
    k %= len;
    if (k == 0) {
        return head; // No rotation needed
    }

    Node* list1 = NULL;
    Node* list2 = NULL;
    ptr = head;
    while (--k) {
        ptr = ptr->next;
    }

    list2 = ptr->next;
    ptr->next = NULL;
    list1 = head;

    // Step 3: reversing both list1 and list2

    // we need to save the reference of list1 head in order to combine both lists after reversing them
    Node* l1head = list1;

    list1 = reverseList(list1);
    list2 = reverseList(list2);

    // Step 4: Now, joining list1 to list2, Note that ptr is still at the end of list1

    l1head->next = list2;

    // Step 5: Now, finally reversing the whole list

    head = reverseList(list1);

    // finally returning head
    return head;
}

int main() {
    // Creating a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node();
    head->data = 1;
    Node* node2 = new Node();
    node2->data = 2;
    Node* node3 = new Node();
    node3->data = 3;
    Node* node4 = new Node();
    node4->data = 4;
    Node* node5 = new Node();
    node5->data = 5;

    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;

    cout << "Original List: ";
    printList(head);

    int k = 2; // Rotate by 2 positions

    head = rotate(head, k);

    cout << "Rotated List: ";
    printList(head);

    // Clean up the memory
    Node* current = head;
    Node* next;
    while (current != NULL) {
        next = current->next;
        delete current;
        current = next;
    }

    return 0;
}
