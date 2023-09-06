// shift + alt + f

#include <stdio.h>

int main()
{
    int num;

    for (num = 1; num <= 100; num++)
    {
        if (num % 3 == 0 && num % 5 == 0)
        {
            printf("Ding Ping ");
        }
        else
        {
            if (num % 3 == 0)
            {
                printf("Ding ");
            }
            else
            {
                if (num % 5 == 0)
                {
                    printf("Ping ");
                }
                else
                {
                    printf("%d ", num);
                }
            }
        }
    }

    printf("Lee ");

    return 0;
}
