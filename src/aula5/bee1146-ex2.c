#include <stdio.h>

int main()
{

  int val, cont;

  while (scanf("%d", &val) && val > 0)
  {
    for (cont = 1; cont < val; cont++)
    {
      printf("%d ", cont);
    }

    printf("%d\n", cont);
  }

  return 0;
}