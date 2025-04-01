// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int main() {
    int *p,*q;
    int n,i;
    printf("enter no of elements(size) you want to store");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("enter %d elements ",n);
    
    q=p;
    
    for(i=0;i<n;i++){
        scanf("%d",q);
        q++;
    }
    
    q=p;
    printf("\n elements are");
     for(i=0;i<n;i++){
        printf("%d",*q);
        q++;
    }
    
    free(p);
    
    
    

    return 0;
}
