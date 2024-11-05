 
 #include <iostream>
 using namespace std;
 struct Node {
 int data;
 Node* next;
 };
 
 // Function to insert a new node at the end of the linked list (for initial setup)
 void insertAtEnd(Node*& head, int newData) {
 Node* newNode = new Node();
 newNode->data = newData;
 newNode->next = nullptr;
 if (head == nullptr) {
 head = newNode;
 return;
 }
 Node* temp = head;
 while (temp->next != nullptr) {
 temp = temp->next;
 }
 temp->next = newNode;
 }
 // Function to insert a new node after a given node
 void insertAfterNode(Node* prevNode, int newData) {
 if (prevNode == nullptr) {
 cout << "The given previous node cannot be nullptr." << endl;
 return;
 }
Node* newNode = new Node();
 newNode->data = newData;
 newNode->next = prevNode->next; // Link newNode to the node after prevNode
 prevNode->next = newNode; // Link prevNode to newNode
 }
 // Function to print the linked list
 void printList(Node* head) {
 while (head != nullptr) {
 cout << head->data << "-> ";
 head = head->next;
 }
 cout << "nullptr" << endl;
 }
 int main() {
 Node* head = nullptr; // Initialize an empty list
 int n;
 // Ask the user for the number of elements
 cout << "Enter the number of elements in the linked list: ";
 cin >> n;
 // Take each element as input and add to the linked list
 for (int i = 0; i < n; ++i) {
 int data;
 cout << "Enter element " << i + 1 << ": ";
 cin >> data;
 insertAtEnd(head, data);
 }
 // Print the initial linked list
 cout << "The linked list after initial input: ";
 printList(head);
 // Choose a node after which to insert a new node
 int targetData, newData;
 cout << "Enter the value of the node after which you want to insert a new node: ";
 cin >> targetData;
 cout << "Enter the new element to insert: ";
cin >> newData;
 // Find the target node
 Node* current = head;
 while (current != nullptr && current->data != targetData) {
 current = current->next;
 }
 // Insert the new node after the target node, if found
 if (current != nullptr) {
 insertAfterNode(current, newData);
 cout << "The linked list after insertion: ";
 printList(head);
 } else {
 cout << "Node with value " << targetData << " not found in the list." << endl;
 }
 return 0;
 }