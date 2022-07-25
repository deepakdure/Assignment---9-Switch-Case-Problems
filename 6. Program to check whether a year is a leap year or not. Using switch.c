// 6. Program to check whether a year is a leap year or not. Using switch statement
#include <stdio.h>
int main()
{
    int Y, j, k;
    printf("enter a Year\n");
    scanf("%d", &Y);
    j = ((Y % 4 == 0) && ((Y % 400 == 0) || (Y % 100 != 0)));
    // True - 1
    // False - 0
    switch (j)
    {
    case 1:
        printf("leap Year");
        break;
    case 0:
        printf("Not a leap Year");
    }
    return 0;
}
