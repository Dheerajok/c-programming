#include<stdio.h>

int main(){
    int celsius;
    printf("write celsius :");
    scanf("%d",&celsius);
    printf("%d celsius is equals to %f fehrenheit",celsius,(celsius*(9.0/5.0))+32);
    return 0;
}