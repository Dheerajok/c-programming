#include <stdio.h>

int main()
{
    // variables
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    // inputs from users
    printf("enter an integer");
    scanf("%d", &myInt);

    printf("enter an float value");
    scanf("%f", &myFloat);

    printf("enter an double value");
    scanf("%lf", &myDouble);

    printf("enter an char value \n");
    scanf(" %c", &myChar);

    printf("size of %d is %d\n", myInt, sizeof(myInt));
    printf("size of %.1f is %d\n", myFloat, sizeof(myFloat));
    printf("size of %lf is %d\n", myDouble, sizeof(myDouble));
    printf("size of %c is %d \n\n", myChar, sizeof(myChar));



    //size of data type
    printf("size of data types \n");
    printf("size of integer :- %d\n",sizeof(int));
    printf("size of integer :- %d\n",sizeof(float));
    printf("size of integer :- %d\n",sizeof(double));
    printf("size of integer :- %d\n",sizeof(char));

    

    return 0;
}



