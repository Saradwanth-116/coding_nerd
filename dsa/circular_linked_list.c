#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *head=NULL;
void creation(){
                int n;
                struct node *newnode;
                struct node *temp=NULL;

                printf("enter no of nodes");
                scanf("%d",&n);
                for (int i = 0; i < n; i++)
                {
                newnode=(struct node *)malloc(sizeof(struct node));
                    printf("enter data");
                    scanf("%d",&newnode->data);
                    if(head==NULL){
                        head=newnode;
                        temp=newnode;

                    }
                    else{

                        temp->link=newnode;
                        temp=newnode;
                    }
                    newnode->link=NULL;
                }
                while (temp->link!=NULL)
                {
                    temp=temp->link;
                }
                temp->link=head;
                int count=0;
                while (head->link!=NULL)
                {
                    printf("%d\n",head->data);
                    head=head->link;
                    count++;
                    if(count==5){
                        printf("ba bye......");
                        break;
                    }
                }
}
void traverse(){
    
}
int main(){
    creation();
    return 0;
}