#include <stdio.h>
#define MAX 100
int top=-1;
int stack_arr[MAX];
void creation() {
	int value;
	int breaker;
	for(int i=0; i<MAX; i++) {
		printf("enter the value:- ");
		scanf("%d",&value);
		stack_arr[i]=value;
		while (1==1)
		{
			printf("added to the stack nigga! wanna stop? \n1 to exit \n0 to add more :- ");
			scanf("%d",&breaker);
			if(breaker==1) {
				printf("ba bye niggesh");
				return;
			}
			else if(breaker==0) {
				printf("\n\nthen add the shit broooo\n\n");
				break;
			}
			else {
				printf("\nwtf nigga cant u follow the instructions \n kya chutya banegare tuu.....\n");
			}
		}

	}
}


void push() {
	if(top==MAX-1) {
		printf("the array is full nigga");
		return;
	}
	int value;
	printf("\nenter the element to push nigga:- ");
	scanf("%d",&value);
	top++;
	stack_arr[top]=value;
}
void pop() {
	if(top<=-1) {
		printf("stack underfflow nigga!!");
		return ;
	}
	else {
		printf("\npopped re sudeep\n");
		top--;
	}
}
int main() {
	int choice;
	creation();
	push();


}