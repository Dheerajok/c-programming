#include <stdio.h>

int main(){
    int arr[3][3];
    int sum = 0;
    printf("Enter the elements of the 2D array: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }

    printf("The sum of the diagonal elements of the 2D array is: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }
        
    }

    printf("%d", sum);
    
    return 0;
}