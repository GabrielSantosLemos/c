#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d", &a);
    for(b = 1; b<=a; b++)
    {
        printf("%d %.0f %.0f\n", b, pow(b, 2), pow(b, 3));
    }
    return 0;
}