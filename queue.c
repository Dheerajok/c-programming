#include <stdio.h>
#include <stdlib.h>
#define Maxsize 5

void insert();
void delete();
void display();
int queue[Maxsize];
int front = -1;
int rear = -1;

int main(){
    
    insert();
    insert();
    insert();
    insert();
    insert();
    insert();
    insert();
    display();
    delete();
    delete();
    display();
    delete();
    delete();
    delete();
    delete();

    return 0;

}

void insert(){

    int data;
    if(rear==Maxsize-1){
        printf("\n overflow");
    }else{
        if(rear==1){
            front=0;
            rear=0;
        }else{
    
            rear++;
    
        }
        printf("\n enter a value for insert");
        scanf("%d",&data);
        queue[rear]=data;

    }



}


void delete(){

    if(front==-1){
        printf("\n queue underflow");
    }else{
        if(front==rear){
            queue[front]="\0";
            front=-1;
            rear=-1;
        }else{
            queue[front]="\0";
            front++;
    
        }
    }

}


void display(){

    int i;
    printf("\n elements of queue are");
    for ( i = front; i <= rear; i++)
    {
        printf("%d",queue[i]);
    }
    

}