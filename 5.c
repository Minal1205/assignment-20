#include <stdio.h>
//program to find the maximum number between two numbers using a pointer
int max(int *x, int *y)
{
    if (*x > *y)
    {
        printf("%d is greater", *x);
    }
    else
        printf("%d is greater\n", *y);
}

int main()
{
    int a, b;
    printf("Enter two Numbers\n");
    scanf("%d %d", &a, &b);
    max(&a, &b);

    return 0;
}