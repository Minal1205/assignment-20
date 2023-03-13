#include <stdio.h>
// program to calculate the length of the string using a pointer

int length(char *a)
{
    int count = 0;
    while (*a != '\0')
    {
        count++;
        a++;
    }
    return count;
}

int main()
{
    char c[100];
    printf("Enter String\n");
    gets(c);
    int len = length(c);

    printf("Length of the string is %d", len);

    return 0;
}