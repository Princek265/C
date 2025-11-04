#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void insertAtBeginning(int value)
{
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(int value)
{
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
        return;
    }

    struct Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtPosition(int value, int position){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if(position==1){ // 10->20->30  to 5->10->20->30
        newNode->next = head;
        head = newNode;
    }

    struct Node* temp = head;
    for(int i=0;i<position-1 && temp!=NULL;i++){
        temp = temp->next;
    }
    if(temp==NULL){
        printf("\nInvalid Position");
        free(newNode);
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void display(){
    struct Node* temp = head;
    printf("Linked List: ");
    while(temp!=0){
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL \n");

}



int main(){
    insertAtEnd(10);
    display();
    insertAtEnd(20);
    display();
    insertAtBeginning(5);
    display();
    insertAtPosition(15,3);
    display();
    return 0;
}