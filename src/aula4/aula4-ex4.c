#include <stdio.h>
#include <math.h>

int main()
{
    int qde, cont;

    scanf("%d", &qde);

    for (cont = 1; cont <= qde; cont++)
    {
        printf("%d %.0f %.0f", cont, pow(cont, 2), pow(cont, 3));
    }

    return 0;
}
