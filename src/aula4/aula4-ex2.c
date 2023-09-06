/* ODS 6.2.1 - indicadores dos estados no ano de 2019 dados em porcentagem
AC   AL   AM   AP   BA   CE   DF   ES   GO   MA   MG   MS   MT   PA   PB   PE   PI   PR   RJ   RN   RO   RR   RS   SC   SE   SP   TO
60.8 64.8 70.4 67.7 69.2 77.4 97.8 56.2 73.8 62.1 50.9 91.2 83.0 58.2 76.4 68.9 85.8 89.5 63.2 44.3 69.6 72.3 79.3 90.2 69.6 82.6 69.4
*/

#include <stdio.h>
#define qdteEstados 27

int main()
{
    int i;
    float ind;
    float media = 0;

    for (i = 1; i <= qdteEstados; i++)
    {
        scanf("%d", &ind);
        media += ind;
    }

    media = media / qdteEstados;

    printf("Indice médio no Brasil: %.1f", media);

    return 0;
}