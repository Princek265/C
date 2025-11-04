#include<stdio.h>
#include<stdlib.h> // for malloc

struct Node{
    int data;
    struct Node* next;
};

// Func to create newNode
struct Node* createNode(int value){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void insertEnd(struct Node** head, int value){ // head from this function holding the address of the head from main function 
                                               // 
    struct Node* newNode = createNode(value);
    if(*head == NULL){
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void display(struct Node* head){
    if(head==NULL){
        printf("\nList is empty");
        return;
    }
    struct Node* temp = head;
    while(temp!=NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void deleteAtStart(struct Node** head){
    if(*head==NULL){
        printf("List is empty, We can't delete.\n");
        return;
    }
    struct Node* temp = *head;
    *head = (*head)->next;
    printf("Deleted element: %d\n", temp->data);
    free(temp);
}

void deleteAtEnd(struct Node **head){
    if(*head == NULL){
        printf("List is empty, We can't delete.\n");
        return;
    }

    struct Node *temp = *head;
    struct Node *prev = NULL;

    // If there is only one node
    if(temp->next == NULL){
        printf("Deleted element: %d\n", temp->data);
        free(temp);
        *head = NULL;
        return; // ✅ Return here to prevent further execution
    }

    // Traverse to the last node
    while(temp->next != NULL){
        prev = temp;
        temp = temp->next;
    }

    printf("Deleted element: %d\n", temp->data);
    prev->next = NULL;
    free(temp);
}


void deleteAtPosition(struct Node** head, int position){
    if(*head == NULL){
        printf("List is empty\n");
        return;
    }

    struct Node* temp = *head;

    // Delete first node
    if(position == 1){
        *head = temp->next;
        printf("Deleted element: %d\n", temp->data);
        free(temp);
        return;
    }

    struct Node* prev = NULL;

    // Traverse to the (position - 1)-th node
    for(int i = 1; temp != NULL && i < position; i++){
        prev = temp;
        temp = temp->next;
    }

    // If position is invalid
    if(temp == NULL){
        printf("Invalid Position\n");
        return;
    }

    // Unlink and free node
    prev->next = temp->next;
    printf("Deleted element: %d\n", temp->data);
    free(temp);
}


void searchElement(struct Node* head, int value){
    if(head == NULL){
        printf("List is empty\n");
        return;
    }

    struct Node* temp = head;
    int position = 1;   // to track position
    int found = 0;      // flag

    while(temp != NULL){
        if(temp->data == value){
            printf("Element %d found at position %d\n", value, position);
            found = 1;
            break;  // remove this if you want to find *all* occurrences
        }
        temp = temp->next;
        position++;
    }

    if(!found){
        printf("Element %d not found in the list\n", value);
    }
}


void searchAndCount(struct Node* head, int value){
    if(head == NULL){
        printf("List is empty\n");
        return;
    }

    struct Node* temp = head;
    int position = 1;   // to track position
    int count = 0;      // count

    while(temp != NULL){
        if(temp->data == value){
            count++;
            printf("Occurance: %d element %d found at position %d\n",count, value, position);
        }
        temp = temp->next;
        position++;
    }

    if(!count){
        printf("Element %d not found in the list\n", value);
    }
}




int main(){
    struct Node* head = NULL;
    
    insertEnd(&head,10);
    display(head);
    insertEnd(&head,20);
    display(head);
    insertEnd(&head,30);
    display(head);
    insertEnd(&head,40);
    display(head);
    deleteAtStart(&head);
    display(head);
    deleteAtEnd(&head);
    display(head);
    deleteAtPosition(&head,2);
    display(head);
    insertEnd(&head,30);
    insertEnd(&head,40);
    insertEnd(&head,50);
    insertEnd(&head,10);
    insertEnd(&head,60);
    insertEnd(&head,10);
    insertEnd(&head,70);
    insertEnd(&head,80);
    insertEnd(&head,10);
    searchElement(head,40);
    searchAndCount(head,100);
    display(head);
    return 0;
}