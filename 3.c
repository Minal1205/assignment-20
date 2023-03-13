#include <stdio.h>
//a function to sort an array of int type values.
int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a[10];
    printf("Enter Array Elements\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (a[i] > a[j])
            {
                swap(&a[i], &a[j]);
            }
        }
    }
    printf("Sorted string is\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
    {
        /* code */
    }

    return 0;
}