#include <stdio.h>
#include <stdlib.h>
#define MAX 6
typedef struct 
{
    int arr[MAX];
    int front;
    int rear;
}Queue;

void initQueue(Queue*q){
    q->front=-1;
    q->rear=-1;
}
void create(Queue*s){
    int data;
    if(s->front==MAX-1 || s->rear>s->front){
        printf("the queue is full");
        return;
    }
    else{
        if(s->rear==-1)
        s->rear+=1;
        printf("enter the element to add in queue :-");
        s->front+=1;
        scanf("%d",&s->arr[s->front]);
    }
    for ( int i=s->rear; i <=s->front; i++)
        {
            printf("%d<-",s->arr[i]);
        }
        printf("end\n");
}
void pop(Queue*s){
    printf("\n popping.....\n");
    if(s->rear==-1 || s->rear>=s->front){
        printf("queue is empty !!\n");
        return;
    }
    else {
        s->rear+=1;
        // printf("%d %d",s->rear,s->front);
        for ( int i=s->rear; i <=s->front; i++)
        {
            printf("%d<-",s->arr[i]);
        }
        printf("end\n");
    }
}
int main(){
    Queue s;
    initQueue(&s);
    create(&s);
    create(&s);
    create(&s);
    create(&s);
    pop(&s);
    pop(&s);
    pop(&s);
    pop(&s);
    pop(&s);
    return 0;
    
}
