// 7. Program to take the value from the user as input
#include <stdio.h>
int main()
{
    float a;
    int U;
    printf("\nenter electricity bill in UNIT = ");
    scanf("%d", &U);
    switch (U)
    {
    case 1 ... 50:
        a = U * 0.50;
        break;
    case 51 ... 150:
        a = 25 + ((U - 50) * 0.75);
        break;
    case 151 ... 250:
        a = 100 + ((U - 150) * 1.20);
        break;
    default:
    {
        a = 220 + ((U - 250) * 1.50);
    }
    }
    printf("Total charge of %d UNIT electricity is = %f", U, a + a * 0.20);
    return 0;
}
