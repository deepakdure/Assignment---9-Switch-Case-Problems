// 10. C program to find all roots of a quadratic equation using switch case
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, D, i;
    float root1, root2;
    printf("\nenter the value of a,b,c for quardratic equation (ax^+bx+c) \n");
    scanf("%d%d%d", &a, &b, &c);
    D = b * b - 4 * a * c;
    switch (D > 0)
    {
    case 1:
        printf("Both roots are distint and real\n");
        root1 = ((-b + sqrt(D)) / (2.0 * a));
        root2 = ((-b - sqrt(D)) / (2.0 * a));
        printf("root1 = %f\nroot2 = %f", root1, root2);
        break;
    case 0:
        switch (D < 0)
        {
        case 1:
            printf("Both roots are imagenary\n");
            break;
        case 0:
            printf("Both roots are equal\n");
            root1 = (-b / 2 * a);
            root2 = (-b / 2 * a);
            printf("root1 = %f\nroot2 = %f", root1, root2);
            break;
        }
    }
    return 0;
}