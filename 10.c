#include<stdio.h>
#include<string.h>
//program to print a string in reverse using a pointer

int main(){

    char a[100];
    printf("Enter string\n");
    gets(a);
    char*p=a;
    for(int i=0;i<strlen(a);i++){
        p++;

    }
printf("Reverse of the string is\n");
    for(int i=0;i<=strlen(a);i++){
        printf("%c",*p--);
    }

    
    return 0;
}