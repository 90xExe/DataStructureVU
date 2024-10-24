#include <iostream>

// Add the standard namespace for convenience
using namespace std;

// Node structure
struct Node {
    int data;       // Data part
    Node* next;     // Pointer to the next node

    // Constructor to initialize node
    Node(int val) : data(val), next(nullptr) {}
};

// LinkedList class
class LinkedList {
private:
    Node* head;     // Pointer to the head of the list

public:
    // Constructor to initialize the linked list
    LinkedList() : head(nullptr) {}

    // Function to insert a new node at the end
    void insert(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode; // If list is empty, new node becomes the head
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next; // Traverse to the end of the list
            }
            temp->next = newNode; // Link the new node
        }
    }

    // Function to display the linked list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next; // Move to the next node
        }
        cout << "nullptr" << endl; // End of the list
    }

    // Destructor to free allocated memory
    ~LinkedList() {
        Node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp; // Free the memory
        }
    }
};

// Main function
int main() {
    LinkedList list; // Create a linked list

    // Insert nodes into the linked list
    list.insert(10);
    list.insert(20);
    list.insert(30);

    // Display the linked list
    list.display();

    return 0;
}