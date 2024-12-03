#include <iostream>
#define SIZE 5 // Define the size of the queue

using namespace std;

int main() {
    int queue[SIZE];  // Array to store the queue elements
    int front = -1;   // Index of the front of the queue
    int rear = -1;    // Index of the rear of the queue

    // Insert elements (Enqueue)
    if (rear == SIZE - 1) {
        cout << "Queue is full! Cannot insert more elements.\n";
    } else {
        if (front == -1) front = 0; // Initialize front if the queue is empty
        queue[++rear] = 10;
        queue[++rear] = 20;
        queue[++rear] = 30;
        cout << "Elements inserted into the queue: 10, 20, 30\n";
    }

    // Remove element (Dequeue)
    if (front == -1 || front > rear) {
        cout << "Queue is empty! Nothing to remove.\n";
    } else {
        cout << "Element removed from the queue: " << queue[front++] << "\n";
    }

    // Display the queue
    if (front == -1 || front > rear) {
        cout << "Queue is empty.\n";
    } else {
        cout << "Current queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
