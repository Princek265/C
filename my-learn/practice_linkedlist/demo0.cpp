#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};

struct Node* createNode(int value){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node)); // Allocate memory to the newNode
    newNode->data = value; // assign value
    newNode->next = NULL; 
    return newNode;
}


void insertAtBeginning(struct Node** head, int value){
    struct Node* newNode = createNode(value);
    if(*head == NULL){
        *head = newNode;
        return;
    }
    newNode->next = *head;
    *head = newNode;
}


void insertAtEnd(struct Node** head,int value){
    struct Node* newNode = createNode(value);
    if(*head = NULL){
        *head = newNode;
        return;
    }
    struct Node* temp = *head; // using temp to iterate and get the current end Node to insert the new end Node
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next = newNode;
}


void insertAtPosition(struct Node** head, int value, int pos){
    struct Node* newNode = createNode(value);

    if(pos == 1){
        newNode->next = *head;  // if inserting at pos 1 then shift the head to right and make the newNode new Head
        *head = newNode;
        return;
    }
    
    struct Node* temp = *head;
    for(int i=1;i<pos-1;i++){
        if(temp == NULL){
            printf("Invalid Position\n");
            free(newNode); // de-allocate the memory
            return;
        }
        temp = temp->next;
    }

    if(temp == NULL){
        printf("Invalid Position\n");
        free(newNode);
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;

}

void deleteAtBeginning(struct Node** head){
    if(*head == NULL){
        printf("List is empty\n");
        return;
    }
    struct Node* temp = *head;
    *head = temp->next;
    free(temp);
}

void deleteAtEnd(struct Node** head){
    if(head == NULL){
        printf("List is empty\n");
        return;
    }
    if((*head)->next = NULL){
        free(*head);
        return;
    }
    struct Node* temp = *head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

// void deleteAtPosition(struct Node** head, int pos){
//     if(pos == 1){
//         printf("List is empty\n");
//         free(head);
//         return;
//     }

//     struct Node* temp = *head;
//     for(int i=0; i<pos-1;i++){
//         if(temp == NULL){
//             printf("Invalid Position\n");
//             return;
//         }
//         temp = temp->next;
//     }

//     if(temp == NULL){
//         printf("Invalid Position\n");
//             return;
//     }
//     temp->next = temp->next->next;
// }



int main(){

    struct Node* head = NULL;

}