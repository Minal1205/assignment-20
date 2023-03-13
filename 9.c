#include <stdio.h>
// Write a program to print the elements of an array in reverse order.

int main()
{
    int a[10];
    printf("Enter Array Elements\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    int *p = &a[9];

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *p--);
    }

    return 0;
}