#include <stdio.h>
#include <stdlib.h>

struct Node * create_List(int arr[], int size); 
struct Node {
    int data; 
    struct Node * next;
}; 

// // struct Node * create_List(int arr[], int size); 
int main()
{
    int a[] = {5, 10, 15, 20, 25}; 
    struct Node *head = NULL; 
    head = create_List(a, 5); 

    struct Node *current = head;

    while (current != NULL)
    {
        printf("%d -> ", current -> data); 
        current = current -> next; 
    }   printf("NULL\n"); 
    
}
struct Node * create_List(int arr[], int size) {
    // int i; 
    struct Node *head = NULL, *tmp = NULL, *current = NULL; 
    for(int i = 0; i < size; i++) {  
        tmp = (struct Node*) malloc(sizeof(struct Node));
        tmp -> data = arr[i]; 
        tmp -> next = NULL; 

        if(head == NULL) {  // When there's no node. 
            head = tmp; 
            current = tmp;
        }
        else {              // When there's already a node.. 
            current -> next = tmp; 
            current = current -> next; 
        }

        
        // printf("%d\n", arr[i]); 
        // // printf("%d --> ", arr[i]); 
    }   // // printf("X"); 

    return head;
}