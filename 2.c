#include<stdio.h>
//function to swap strings of two char arrays of calling functions.

void swap(char** ptr1, char** ptr2)
{
    char * temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main()
{
    char *str1 = "Minaal";
    char *str2 = "Amlani";
    printf("%s : %s\n", str1, str2);
    swap(&str1, &str2);
    printf("%s : %s\n", str1, str2);
    return 0;
}