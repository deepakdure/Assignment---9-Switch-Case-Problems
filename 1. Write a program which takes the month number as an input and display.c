// 1. Write a program which takes the month number as an input and display number of days in that month
#include <stdio.h>
int main()
{
    int n;
    printf("enter month number\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Day in this month is = 31");
        break;
    case 2:
        printf("Day in this month is = 28 OR 29");
        break;

    case 3:
        printf("Day in this month is = 31");
        break;
    case 4:
        printf("Day in this month is = 30");
        break;
    case 5:
        printf("Day in this month is = 31");
        break;
    case 6:
        printf("Day in this month is = 30");
        break;
    case 7:
        printf("Day in this month is = 31");
        break;
    case 8:
        printf("Day in this month is = 31");
        break;
    case 9:
        printf("Day in this month is = 30");
        break;
    case 10:
        printf("Day in this month is = 31");
        break;
    case 11:
        printf("Day in this month is = 30");
        break;
    case 12:
        printf("Day in this month is = 31");
        break;
    default:
        printf("You don't enter number of month");
        break;
    }
    return 0;
}