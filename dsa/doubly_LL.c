#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *link_prev;
	struct node *link;

};
struct node *head=NULL;
void creation() {
	struct node *newnode;
	struct node *temp=NULL;
	int n;
	printf("enter no of nodes");
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter data:- ");
		scanf("%d",&newnode->data);
		newnode->link=NULL;
		if(head==NULL)
		{
			head=newnode;
			temp=newnode;
			head->link_prev=NULL;
		}
		else {
			temp->link=newnode;
			newnode->link_prev=temp;
			temp=newnode;
		}
        

	}
	printf("this prints the last 2nd element using rev_link :- %d",temp->link_prev->link_prev->data);

}
void traverse(){
    
}
int main(){
    creation();
    traverse();
    return 0;
}
