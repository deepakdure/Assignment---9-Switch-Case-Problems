// 5. Convert the following if-else-if construct into switch case
#include <stdio.h>
int main()
{
    int x;
    printf("1, 2 or 3\n");
    printf("enter your choice\n");
    scanf("%d", &x);
    switch (x == 1)
    {
    case 1:
        printf("good");
        break;
    case 0:
        switch (x == 2)
        {
        case 1:
            printf("better");
            break;
        case 0:
            switch (x == 3)
            {
            case 1:
                printf("best");
                break;
            default:
                printf("invalid");
            }
        }
    }
    return 0;
}
