#include <stdio.h>
//a program in C to demonstrate how to handle the pointers in the program.

int main()
{
    int a = 10;
    char c = 'a';
    float b = 12.2;
    int *p = &a;
    char *q = &c;
    float *r = &b;
    printf("Value of a is %d\n", a);
    printf("Value of a is %d\n", *&a);
    printf("Value of a is %d\n", *p);
    printf("Address of a is %d\n", &a);
    printf("Address of a is %d\n", p);
    printf("---------------------------------\n");

    printf("Value of b is %f\n", b);
    printf("Value of b is %f\n", *&b);
    printf("Value of b is %f\n", *r);
    printf("Address of b is %d\n", &b);
    printf("Address of b is %d\n", r);
    printf("---------------------------------\n");

    printf("Value of c is %c\n", c);
    printf("Value of c is %c\n", *&c);
    printf("Value of c is %c\n", *q);
    printf("Address of c is %d\n", &c);
    printf("Address of c is %d\n", q);
    printf("---------------------------------\n");

    printf("Address of p is %u\n", &p);
    printf("Address of q is %u\n", &q);
    printf("Address of r is %u\n", &r);
    return 0;
}