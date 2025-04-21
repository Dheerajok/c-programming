#include<stdio.h>

int main(){
    char name[100];
    int i=0;
    printf("Enter your message ");
    scanf("%[^\n]s", name);
    while(name[i]!='\0'){
        name[i]=name[i]+12;
        i++;
    
    }

    printf("The encrypted message is %s: \n",name);
    i=0;
    while(name[i]!='\0'){
        name[i]=name[i]-12;
        i++;
    
    }

    printf("The decrypted message is %s: ",name);

    return 0;
}