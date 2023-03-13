#include <stdio.h>
// function to swap values of two in variables of calling function.
int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 2, y = 3;
    printf("Values before swap is x=%d,y=%d\n", x, y);
    swap(&x, &y);
    printf("Values after swap is x=%d,y=%d", x, y);
    return 0;
}