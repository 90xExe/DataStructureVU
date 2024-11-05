#include <iostream>
using namespace std;

// Define a Node structure
struct Node {
    int data;
    Node* next;

    // Constructor to create a new node
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Function to insert a new node after a given node
void insertAfter(Node* prevNode, int newData) {
    // Check if the previous node is NULL
    if (prevNode == nullptr) {
        cout << "The given previous node cannot be NULL" << endl;
        return;
    }

    // Create a new node with given data
    Node* newNode = new Node(newData);

    // Make next of new node as next of previous node
    newNode->next = prevNode->next;

    // Move the next of previous node to the new node
    prevNode->next = newNode;
}

// Function to print the linked list
void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " -> ";
        node = node->next;
    }
    cout << "NULL" << endl;
}

// Main function to test the insertAfter function
int main() {
    // Create nodes
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    // Link nodes
    head->next = second;
    second->next = third;

    cout << "Original Linked List: ";
    printList(head);

    // Insert a new node with value 25 after the second node
    insertAfter(second, 25);

    cout << "Linked List after insertion: ";
    printList(head);

    return 0;
}
