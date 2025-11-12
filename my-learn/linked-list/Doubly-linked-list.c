#include<stdio.h>
#include<stdlib.h>

struct Node{
    struct Node* prev;
    int data;
    struct Node* next;
};

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;

    return newNode;
}

void insertAtEnd(struct Node** head, int value) {
    struct Node* newNode = createNode(value);

    // Case 1: Empty list — new node becomes the head
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    // Case 2: Traverse to the last node
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Case 3: Insert newNode after the last node
    temp->next = newNode;
    newNode->prev = temp;
}



int main(){



    return 0;

}