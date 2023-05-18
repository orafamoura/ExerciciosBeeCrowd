#include <bits/stdc++.h>

using namespace std;

int main()
{
  double a;
  scanf("%lf", &a);
  
  int string[] = {0, 25, 50, 75, 100};
  
  if((a >= 0.0000) && (a <= 25.0000))
  {
    printf("Intervalo [%d,%d]\n", string[0], string[1]);
  }
  else if ((a > 25.00001) && (a <= 50.0000))
  {
    printf("Intervalo (%d,%d]\n", string[1], string[2]);
  }
  else if (a > 50.00001 && a <= 75.0000)
  {
    printf("Intervalo (%d,%d]\n", string[2], string[3]);
  }
  else if (a > 75.00001 && a <= 100.0000)
  {
    printf("Intervalo (%d,%d]\n", string[3], string[4]);
  }
  else
  {
    printf("Fora de intervalo\n");
  }
  return 0;
}
