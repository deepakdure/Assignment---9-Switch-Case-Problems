// 4. Write a menu driven program with the following options :

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice, a, b, c;
    printf("\n\na. Check whether a given set of three numbers are lengths of an isosceles triangle or not\nb. Check whether a given set of three numbers are lengths of sides of \na right angled triangle or not\nc. Check whether a given set of three numbers are equilateral triangle or not\nd. Exit\n\n");
    printf("Enter your choice  =>");
    scanf("%c", &choice);

    switch (choice)
    {
    case 'a':
        printf("enter 3 number as a length of triangle\n");
        scanf("%d%d%d", &a, &b, &c);
        if (a == b || b == c || c == a)
        {
            printf("Length of isoscale Triangle");
            break;
        }
        else
        {
            printf("Not length of isoscale Triangle");
            break;
        }
    case 'b':
        printf("enter 3 number as a length of triangle\n");
        scanf("%d%d%d", &a, &b, &c);
        if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b)
        {
            printf("side of Right angle triangle");
            break;
        }
        else
        {
            printf(" not side of Right angle triangle");
            break;
        }
    case 'c':
        printf("enter 3 number as a length of triangle\n");
        scanf("%d%d%d", &a, &b, &c);
        if (a == b && b == c && c == a)
        {
            printf("side ofequiletral triangle");
            break;
        }
        else
        {
            printf("not side ofequiletral triangle");
            break;
        }
    case 'd':
        exit(0);
    default:
        printf("wrong choice");
        break;
    }
    return 0;
}