#include <stdio.h>
//a program to count the number of vowels and consonants in a string using a pointer.

int main()
{
    char c[100];
    char *p;
    int vCount = 0, cCount = 0;

    printf("Enter any string\n");
    gets(c);

    p = c;

    while (*p != '\0')
    {
        if (*p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U' || *p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u')
            vCount++;
        else
            cCount++;
        
        p++;
    }

    printf("Number of Vowels in String: %d\n", vCount);
    printf("Number of Consonants in String: %d", cCount);
    return 0;
}