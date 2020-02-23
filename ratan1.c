#include <stdio.h>
int main()
{
    int choice, a, b, s;
    printf("\n1. addition");
    printf("\n2. odd-even");
    printf("\n3. printing N number");

    printf("\nEnter your choice");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("enter two number");
        scanf("%d%d", &a, &b);
        s = a + b;
        printf("\nsum is %d", s);
        break;
    case 2:
        printf("enter a number");
        scanf("%d", &a);
        if (a % 2 == 0)
            printf("even number");
        else
            printf("odd number");
        break;
    case 3:
        printf("enter a number");
        scanf("%d", &a);
        for (b = 1; b < a; b++)
            printf("%d", b);
        break;
    default:
        printf("invalid choice");
    }
    return 0;
}