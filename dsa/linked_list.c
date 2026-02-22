#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *link;
	struct node *revlink;

};
struct node *head=NULL;
void creation(){
    struct node *ptr=NULL;
	int n;
	// printf("%d\n",head->data);
	printf("enter no of nodes :- ");
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
    {       struct node *current=(struct node *)malloc(sizeof(struct node));
            printf("enter data:- ");
            scanf("%d",&current->data);
            current->link=NULL;
        if (head == NULL) {
            head = current;
            ptr = head;
        } else {
            ptr->link = current;
            current->revlink=ptr;

            ptr = current;
        }
    }
}
void traverse(){
    struct node *ptr=NULL;
    int pos,count;
    ptr=head;
    printf("enter the position to peek :- ");
    scanf("%d",&pos);
    
    for (int i = 0; i < pos-1; i++)
    {   
        if (ptr->link == NULL) {
            printf("Position out of range\n");
            return;
        }
        ptr=ptr->link;
        
    }
    printf("the element at the %d index is %d",pos-1,ptr->data);
}
void insert(){
    int choice,pos;
    struct node *ptr=NULL;

    printf("enter 1 to insert at starting\nenter 2 to insert at end\n3 for other than above cases");
    scanf("%d",&choice);
    if(choice==1)
                {
                    struct node *start=(struct node *)malloc(sizeof(struct node));
                    
                    printf("enter element :- ");
                    scanf("%d",&start->data);
                    start->link=head;
                    head=start;
                    
                }
    else if(choice==2){
                    struct node *end=(struct node *)malloc(sizeof(struct node));
                    printf("enter element :- ");
                    scanf("%d",&end->data);
                    ptr=head;
                    while(ptr->link!=NULL){
                        ptr=ptr->link;
                    }
                    ptr->link=end;
                    end->link=NULL;
    }
    else if(choice==3){
                    struct node *midd=(struct node *)malloc(sizeof(struct node));
                    printf("enter element :- ");
                    scanf("%d",&midd->data);
                    printf("enter position :- ");
                    scanf("%d",&pos);
                    ptr=head;
                    for (int i = 0; i < pos; i++)
                    {
                        ptr=ptr->link;
                    }
                    midd->link=ptr->link;
                    ptr->link=midd;

    }
}
void delete(){
                int pos;
                struct node *delete;
                printf("enter position of deletion \n 1 for start position\n 2 for end positon \n 3 for neither of the above case");
                scanf("%d",&pos);
    if(pos==1){
                struct node *delete=head;
                if(head == NULL) {
        printf("List is already empty!");return;}
                head=head->link;
                free(delete);


    }
    if(pos==2){
                struct node *delete=head;
                if(head->link==NULL){printf("there is no elem in the list");return;}
                while(delete->link->link!=NULL)delete=delete->link;
                    free(delete->link);
                    delete->link=NULL;
    }
    if(pos==3){
                int n;
                struct node *delete=head;
                struct node *temp;
                printf("enter the position of deletion");
                scanf("%d",&n);
                if(n==1){
                    temp=head;
                    head=head->link;
                    free(temp);
                    return;
                }
                for (int i = 0; i < n-2; i++)
                {   
                    if(delete->link==NULL){printf("there is no elem in the list");return;}
                    delete=delete->link;
                }
                if(delete->link==NULL){
                            printf("position is  out of range");
                            return;
                }
                temp=delete->link;
                delete->link=delete->link->link;
                free(temp); 
    }

}
int main() {
    creation();
    traverse();
	insert();
	// printf("%d",current->data);
	return 0;
}
    