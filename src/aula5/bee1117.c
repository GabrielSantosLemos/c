#include <stdio.h>
int main()
{
  double nota, media, soma = 0, qtd = 0;
  while (1)
  {
    if (qtd == 2)
      break;
    scanf("%lf", &nota);
    if (nota >= 0 && nota <= 10)
    {
      qtd++;
      soma += nota;
    }
    else
      printf("nota invalida\n");
  }
  media = soma / 2.00;
  printf("media = %.2lf\n", media);
  return 0;
}