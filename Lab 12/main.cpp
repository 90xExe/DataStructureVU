#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
void insertEnd(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

   if (head == nullptr) {
        head = newNode;
    } else {
           Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void deleteNode(Node*& head, int position) {
       if (head == nullptr) {
        cout << "The list is empty.\n";
        return;
    }
    Node* temp = head;
    if (position == 1) {
        head = temp->next; 
        delete temp;     
        return;
    }
  for (int i = 1; temp != nullptr && i < position - 1; i++) {
        temp = temp->next;
    }
   if (temp == nullptr || temp->next == nullptr) {
        cout << "Position is out of bounds.\n";
        return;
    }
   Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;  

    delete nodeToDelete;  
}
void printList(Node* head) {
    if (head == nullptr) {
        cout << "List is empty.\n";
        return;
    }

    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;  
    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);
    insertEnd(head, 40);
    insertEnd(head, 50);

    cout << "Original Linked List: ";
    printList(head);

    int position;
    cout << "Enter the position of the node to delete: ";
    cin >> position;
    deleteNode(head, position);
    cout << "Linked List after deletion: ";
    printList(head);
    return 0;
}