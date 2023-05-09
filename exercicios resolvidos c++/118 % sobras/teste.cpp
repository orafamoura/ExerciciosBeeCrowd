#include <bits/stdc++.h>

using namespace std;

int main()
{
      int notas;
      int sobras100, sobras50, sobras20, sobras10, sobras5, sobras2, sobras1;
      scanf("%d", &notas);

      sobras100 = notas / 100;
      sobras50 = notas % 100 / 50;
      sobras20 = notas % 100 % 50 / 20;
      sobras10 = notas % 100 % 50 % 20 / 10;
      sobras5 = notas % 100 % 50 % 20 % 10 / 5;
      sobras2 = notas % 100 % 50 % 20 % 10 % 5 / 2;
      sobras1 = notas % 100 % 50 % 20 % 10 % 5 % 2 / 1;

      printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", notas, sobras100, sobras50, sobras20, sobras10, sobras5, sobras2, sobras1);
      return 0;
}
