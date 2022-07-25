// 2. Write a menu driven program with the following options
#include <stdio.h>
#include <stdlib.h>
int x, y;
int main()
{
    int n;
    printf("enter your choice\n");
    printf("a. Addition\nb. Subtraction\nc. Multiplication\nd. Division\ne. Exit\n");
    scanf("%c", &n);
    switch (n)
    {
    case 'a':
        printf("enter two numbers\n");
        scanf("%d%d", &x, &y);
        printf("%d+%d = %d", x, y, x + y);
        break;
    case 'b':
        printf("enter two numbers\n");
        scanf("%d%d", &x, &y);
        printf("%d-%d = %d", x, y, x - y);
        break;
    case 'c':
        printf("enter two numbers\n");
        scanf("%d%d", &x, &y);
        printf("%d*%d = %d", x, y, x * y);
        break;
    case 'd':
    {
        float x, y;
        printf("enter two numbers\n");
        scanf("%f%f", &x, &y);
        printf("Restlt is = %f", x / y);
        break;
    }
    case 'e':
        exit(0);
    default:
        printf("wrong choice");
        break;
    }
}
