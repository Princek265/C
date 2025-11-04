#include <stdio.h>

struct Node{
    int data;
    struct Node* next; // next is a pointer variable or Node data type which will point towards next node's data
};

int main(){
    struct Node node1, node2, node3; // creating nodes
    node1.data = 10;
    node2.data = 20;
    node3.data = 30;

    node1.next = &node2;
    node2.next = &node3;
    node3.next = NULL; // last node of the singly linked list points to NULL

    struct Node* head = &node1; // points towards 1st element of the singly linked list
    struct Node* temp = head; // we will use this temporary variable to traverse through this singly linked list

    while(temp != NULL){
        printf("%d-> ",temp->data); // initially (*temp).data = head.data which is node1.data. we are printing the data which temp is holding.
                temp = temp->next; // initailly (*temp).next = head.next which is node1.next 
                                  // node1.next contains address of node2
                                 // now temp is pointing towards node2
    }
    printf("NULL\n"); // this will print NULL in case temp = NULL or its last node's turn
    return 0;
}
