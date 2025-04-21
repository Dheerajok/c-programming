#include<stdio.h>
#define Maxsize 5

int stack[Maxsize];
int Top = -1;
void push();
void pop();
void display();



int main(){

    
    push();
    push();
    push();
    push();
    push();
    push();
    push();
    display();
    pop();
    pop();
    display();
    pop();
    pop();
    pop();
    pop();
    
    return 0;
}

void push(){
    int data;
    if(Top == Maxsize-1){
        printf("Stack is full\n");
}else{
        printf("Enter the data to be pushed: ");
        scanf("%d", &data);
        Top++;
        stack[Top] = data;

    }
}

void pop(){
    if(Top == -1){
        printf("Stack is empty\n");
    }else{
        printf("Popped element is: %d\n", stack[Top]);
        Top--;
    }
}

void display(){
    if(Top == -1){
        printf("Stack is empty\n");
    }else{
        printf("Stack elements are: ");
        for(int i=Top; i>=0; i--){
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}