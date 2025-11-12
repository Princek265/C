#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* next;
};

struct Node* top = NULL;

struct Node* createNode(int value){
struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
newNode->data = value;
newNode->next = NULL;
return newNode;
}

void push(int value){
	struct Node* newNode = createNode(value);
		if(top==NULL){
		top = newNode;
		return;
	}
newNode->next = top;
top=newNode;
return;
}

void pop(){
	if(top==NULL){
		printf("Underflow\n");
		return;
	}
	struct Node* temp = top;
	printf("Element popped: %d\n",temp->data);
	top = top->next;
	free(temp);
}

void peek(){
	printf("Current Top: %d\n",top->data);
}

void display(){
	if(top==NULL){
		printf("Empty Stack\n");
			return;
	}
	struct Node* temp = top;
	
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp=temp->next;
		
	}
	printf("NULL\n");
	
}







int main() {
    push(10);
    display();
    push(20);
    display();
    push(30);

    display();

    peek();

    pop();
    display();
    peek();

    pop();
    display();
    pop();
    display();
    pop(); // test underflow
    display();
    peek();

    return 0;
}