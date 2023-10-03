#include <stdio.h>
int main()
{
  int idade, soma = 0;
  double media, qtd = 0;
  while (1)
  {
    scanf("%d", &idade);
    if (idade < 0)
      break;
    else
    {
      soma += idade;
      qtd++;
    }
  }
  media = soma / qtd;
  printf("%.2lf\n", media);
  return 0;
}