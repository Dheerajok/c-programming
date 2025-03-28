#include<stdio.h>

int main(){
    int num;
    printf("enter an number");
    scanf("%d",&num);

   

    // for (int i = 0;i < 10;i++){

    //     printf("%d * %d = %d \n",num,i+1,num * (i+1));

    // };

    // int i=1;
    // while (i<11){
    //     printf("%d * %d = %d \n",num,i,num * i);
    //     i++;

    // }

    int i=1;

    do{
        printf("%d * %d = %d \n",num,i,num*i);
        i++;
    }while(i<11);

    
    


    return 0;
}