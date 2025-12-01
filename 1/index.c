#include <stdio.h>

int main()
{
    int employees;
    int i;
    int cDown;

    printf("How many employees in the organization? ");
    scanf("%d", &employees);

    for (i = 1; i <= employees; i++)
    {
        for (cDown = 10; cDown >= 0; cDown--)
        {
            printf("%d\n", cDown);
        }
        printf("Blast off!\n");
        return 0;
    }

}
