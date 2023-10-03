#include <stdio.h>

int main()
{

  int valor, ctd, soma;

  do
  {
    scanf("%d", &valor);
    if (valor == 0)
    {
      break;
    }
    if (valor % 2 != 0)
    {
      valor++;
    }
    soma = 0;
    for (ctd = 1; ctd <= 5; ctd++)
    {
      soma += valor;
      valor += 2;
    }
    printf("%d\n", soma);
  } while (valor != 0);

  return 0;
}