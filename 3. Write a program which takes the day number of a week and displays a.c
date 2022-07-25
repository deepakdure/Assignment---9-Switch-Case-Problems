// 3. Write a program which takes the day number of a week and displays a unique greeting message for the day
#include <stdio.h>
int main()
{
    int day;
    printf("day number of a week\n");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("today is Sunday\nThats mean today is holiday");
        break;
    case 2:
        printf("today is Monday\nGood Morning!");
        break;
    case 3:
        printf("today is Tuesday\nHow are you??");
        break;
    case 4:
        printf("today is Wednsday\n Excellence is not a skill. It is an attitude");
        break;
    case 5:
        printf("today is Thursday\nDon’t fall for his words, fall for his actions");
        break;
    case 6:
        printf("today is Friday\nMy attitude will always be based on how you treat me");
        break;
    case 7:
        printf("Today is Saturday\nWell Done Is Better Than Well Said…");

    default:
        printf("wrong choice");
        break;
    }
}