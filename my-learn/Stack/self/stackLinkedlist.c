#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX_SIZE 100;
struct Node{
    int data;
    struct Node *next;
};

struct Stack{
    struct Node *top;
};

struct Node* createNode(int val){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

bool isEmpty(struct Node* top){
    return top==NULL;
}

// bool isFull(struct Node* top){
//     return top == MAX_SIZE-1;
// }

void push(struct Node** top,int val){
    // if(isFull(top)){
    //     printf("Stack OverFlow\n");
    //     return;
    // }
    struct Node* temp = createNode(val);
    temp->next = *top;
    *top = temp;
}

int pop(struct Node** top){
    if(isEmpty(&**top)){
        printf("Stack UnderFlow\n");
        return -1;
    }
    struct Node* temp = *top;
    *top = (*top)->next;
    int val = temp->data;
    free(temp);
    return val;
}

int peek(struct Node* top){
    if(isEmpty(top)){
        printf("Stack UnderFlow\n");
        return -1;
    }
    return top->data;
}

void display(struct Node* top){
    while(top!=NULL){
        printf("%d ",top->data);
        top=top->next;
    }
    printf("\n");
}

void init(struct Stack*  s){
    s->top = NULL;
}
int main(){
    struct Stack s;
    init(&s);
    push(&s.top,10);
    push(&s.top,20);
    push(&s.top,30);
    display(s.top);
    printf("Top element is %d\n",peek(s.top));
    printf("Popped element is %d\n",pop(&s.top));
    display(s.top);
    return 0;
}