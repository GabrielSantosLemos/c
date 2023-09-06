// shift + alt + f

#include <stdio.h>

int main()
{
    int qdeLances, cont, l, r, d;

    scanf("%d", &qdeLances);

    for (cont = 0; cont < qdeLances; cont++)
    {
        scanf("%d %d %d", &l, &r, &d);

        if ((r > 50) && (l < r) && (r > d))
            printf("S\n");
        else
            printf("N\n");
    }

    return 0;
}
