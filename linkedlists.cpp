#include <cstddef>
#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

struct Node* head;

void insertAt(int data, int n);
void deleteAt(int n);
void reverse();
void print();

int main(void){
	head = NULL; //empty
	
	printf("how many numbers?\n");
	int n,i,x,y,z;
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		printf("enter the number and the nth location: \n");
		scanf("%d %d", &x, &y);
		insertAt(x, y);
	}
	print();
	
	printf("enter a position to delete: \n");
	scanf("%d", &z);
	deleteAt(z);
	print();

	reverse();
	printf("\nreverse ");
	print();
	printf("\n");

	return 0;
}

void insertAt(int data, int n){
	struct Node* temp = (Node*) malloc(sizeof(struct Node));
	temp->data = data;
	temp->next = NULL;
	if(n == 1){
		temp->next = head;
		head = temp;
		return;
	}
	Node* prev = head;
	for(int i = 0; i < n-2; i++){
		prev = prev->next;
	}
	temp->next = prev->next;
	prev->next = temp;
}

void deleteAt(int n){
	Node* temp = head;
	
	if(n == 1){
		Node* a = temp->next;
		temp->data = a->data;
		temp->next = a->next;
		delete a;
		return;
	}
	
	for(int i = 0; i < n-2; i++){
		temp = temp->next;
	}
	
	Node* curr = temp->next;
	temp->next = curr->next;
	
	delete curr; //for C lang, must use "free();" function
}

void reverse(){
	struct Node* temp = head;
	struct Node* next = NULL;
	struct Node* prev = NULL;
	while(temp != NULL){
		next = temp->next;
		temp->next = prev;
		prev = temp;
		temp = next;
	}

	head = prev;
}

void print(){
	struct Node* temp = head;
	printf("list is: ");
	while(temp != NULL){
		printf(" %d", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
