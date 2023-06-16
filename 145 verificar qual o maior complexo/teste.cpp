#include <stdio.h>
#include <math.h>

int main()
{

  double a, b, c;
  scanf("%lf %lf %lf", &a, &b, &c);

  double aux = 0;

  if (c > aux)
  {
    aux = c;
  }
  if (b > aux)
  {
    aux = b;
  }
  if (a < aux)
  {
    if (aux == b)
    {
      b = a;
      a = aux;
    }
    else
    {
      c = a;
      a = aux;
    }
  }

  if (a >= b + c)
  {
    printf("NAO FORMA TRIANGULO\n");
  }
  else
  {
    if (pow(a, 2) == pow(b, 2) + pow(c, 2))
    {
      printf("TRIANGULO RETANGULO\n");
    }
    if (pow(a, 2) > pow(b, 2) + pow(c, 2))
    {
      printf("TRIANGULO OBTUSANGULO\n");
    }
    if (pow(a, 2) < pow(b, 2) + pow(c, 2))
    {
      printf("TRIANGULO ACUTANGULO\n");
    }
    if (a == b && b == c)
    {
      printf("TRIANGULO EQUILATERO\n");
    }
    else if (a == b || b == c || c == a)
    {
      printf("TRIANGULO ISOSCELES\n");
    }
  }
  return 0;
}
