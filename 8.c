#include <stdio.h>
// program to compute the sum of all elements in an array using pointers.

int main()
{
    int a[5], sum = 0;

    printf("Enter elements\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    int *p = a;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + *p;
        p++;
    }
    printf("Sum=%d\n", sum);
    return 0;
}