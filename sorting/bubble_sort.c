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
    printf("\n");
for(int i=0;i<b-1;i++){
    for(int j=0;j<b-i-1;j++){
        if(arr[j] >arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
for(int i=0; i<b; i++) {
		printf("%d",arr[i]);
	}

	
return 0;
}
