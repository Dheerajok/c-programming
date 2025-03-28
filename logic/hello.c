#include <stdio.h>

int main(){
    
   int x,y,z;
   scanf("%d",&x);
   scanf("%d",&y);
   scanf("%d",&z);

   if(x>y && x>z){


    printf("x is greater");

   }else if(y>z && y>x){

    printf("y is greater");

   }else{
    printf("z is greater");
   }


    return 0;
}