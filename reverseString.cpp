#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

void reverseString(char *C, int size){
	stack<char> S;
	for(int i = 0; i < size; i++){
		S.push(C[i]);
	}
	for(int i = 0; i < size; i++){
		C[i] = S.top();
		S.pop();
	}
}

int main(){
	char C[51];
	printf("Enter a string to reverse: ");
	fgets(C, 51, stdin);
	reverseString(C, strlen(C));
	printf("Output: %s", C);

	return 0;
}
