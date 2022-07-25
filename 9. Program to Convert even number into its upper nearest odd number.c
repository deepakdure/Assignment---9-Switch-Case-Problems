// 9. Program to Convert even number into its upper nearest odd number
#include <stdio.h>
int main()
{
    int n, x;
    printf("enter a number = ");
    scanf("%d", &n);
    x = n % 2;
    switch (x)
    {
    case 0:
        printf("Next odd number is = %d", n + 1);
        break;
    case 1:
        printf("%d is a odd number please enter a even number", n);
        break;
    }
    return 0;
}