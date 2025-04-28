#include <stdio.h>
#include <stdlib.h>

struct node{

int data;
struct node *next;

};

struct node *first;

void create();
void traverse();
void insert_first();
void insert_at_last();
void insert_between();
void delete_first();
void delete_last();
void delete_between();

int main(){

int ch=1;
struct node*ptr,*cpt;
ptr=(struct node*)malloc(sizeof(struct node));

printf("Enter a value for the first node");
scanf("%d",&ptr->data);



}