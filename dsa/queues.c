#include <stdio.h>
#define MAX 3
int que_arr[MAX];
int top=-1;
int bottom=-1;
void creation(){
    int data;
    if(bottom==-1){
        bottom=0;
    }   top++;
        printf("enter data:- ");
        scanf("%d",&data);
        
        que_arr[top]=data;
}
void pop(){
    if(bottom==-1 || bottom>top)
    {
        printf("the queue is empty\n");
        return;
    }
    bottom++;
}
void display(){
    if(bottom==-1|| bottom>top){
        printf("the queue is empty\n");
        return;
    }
    for(int i=bottom;i<=top;i++){
       printf("%d",que_arr[i]);
        
        
    }
    printf("\n");
    
}
void isFull(){
    if(top==MAX-1){
        printf("the queuei is full");
    }
    else{
        printf("the queue is not full");
    }
}
int main (){
    display();
    creation();
    creation();
    creation();
    display();
    pop();
    display();
    pop();
    display();
    pop();
    display();         // 1
    pop();             // 2
    display();         // 3
    pop();             // 4
    display();         // 5
    return 0;
}





