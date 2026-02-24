#include <stdio.h>
int main()
{
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
	for(int i=0; i<b; i++) {
		if(arr[i]==arr[b-i-1]) {
			if(i!=(b-i-1))
			{
				printf("enter array of different element");
				return 0;

			}
		}
	}

    int target;
    printf("\nenter an integer : ");
    scanf("%d",&target);
        for (int i = 0; i < b; i++)
    {
        if(arr[i]==target){
            printf(" element id found at %d index of the array or %d position ",i,i+1);
        }
    }
    
    return 0;
}
