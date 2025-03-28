#include <stdio.h>

int main()
{
    // allocation matrix
    int i, j;
    int alloc[3][3], max[3][3], need[3][3];

    printf("enter 9 elements of allocation matrix");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            scanf("%d", &alloc[i][j]);
        }
    }

    printf("enter 9 elements of max matrix");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            scanf("%d", &max[i][j]);
        }
    }

    //finding need matrix using nested loop
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            need[i][j]=max[i][j]-alloc[i][j];
        }
    }

    printf("print 9 elements of  allocation matrix \n");

    
    for (i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){

            printf("%d \t",alloc[i][j]);
        }

        printf("\n");
        
    }

    printf("print 9 elements of max matrix \n");

    
    for (i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){

            printf("%d \t",max[i][j]);
        }

        printf("\n");
        
    }

    printf("print 9 elements of  need matrix \n");

    
    for (i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){

            printf("%d \t",need[i][j]);
        }

        printf("\n");
        
    }

    

    return 0;
}