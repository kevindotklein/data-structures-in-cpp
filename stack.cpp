#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 101

int A[MAX_SIZE];
int top = -1;

void push(int x);
void pop();
int topPeek();

int main (){	
	return 0;
}

void push (int x){
	if(top == MAX_SIZE - 1){
		printf("Error: stack overflow\n");
		return;
	}
	A[++top] = x;
}

void pop(){
	if(top == -1){
		printf("Error: the stack is already empty\n");
		return;
	}
	top--;
}

int topPeek(){
	return A[top];
}
