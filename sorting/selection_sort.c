#include<stdio.h>
int main(){
int b;
	printf("enter size of array");
	scanf("%d",&b);
	int arr[b];
	for(int i=0; i<b; i++) {
		printf("enter element for the array: ");
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<b; i++) {
		printf("%d",arr[i]);
	}
    
    return 0;
}