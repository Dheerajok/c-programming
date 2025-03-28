#include<stdio.h>

int main(){
    //area of circle pie * r ** 2
    float pie=3.14;
    int radius;
    int  height=10;
    printf("write radius :");
    scanf("%d",&radius);
    printf("area of a circle is %f \n",pie*radius*radius);

    //volumn of a cylender pie * r ** 2 * h
    printf("volumn of a cylender is :- %f",pie*radius*radius*height);
    return 0;
}