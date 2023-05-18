#include <bits/stdc++.h>

using namespace std;

int main()
{
  double notas;
  scanf("%lf", &notas);
  
  int parteInt = notas;
  int parteDec = (notas - parteInt) * 100;
  
  printf("NOTAS:\n%d nota(s) de R$ 100.00\n", parteInt/100);
  parteInt = parteInt % 100;
  printf("%d nota(s) de R$ 50.00\n", parteInt/50);
  parteInt = parteInt % 100 % 50;
  printf("%d nota(s) de R$ 20.00\n", parteInt/20);
  parteInt = parteInt % 100 % 50 % 20;
  printf("%d nota(s) de R$ 10.00\n", parteInt/10);
  parteInt = parteInt % 100 % 50 % 20 % 10;
  printf("%d nota(s) de R$ 5.00\n", parteInt/5);
  parteInt = parteInt % 100 % 50 % 20 % 10 % 5;
  printf("%d nota(s) de R$ 2.00\n", parteInt/2);
  parteInt = parteInt % 100 % 50 % 20 % 10 % 5 % 2;
  printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n", parteInt);
  printf("%d moeda(s) de R$ 0.50\n", parteDec / 50);
  parteDec = parteDec % 50;
  printf("%d moeda(s) de R$ 0.25\n", parteDec/25);
  parteDec = parteDec % 50 % 25;
  printf("%d moeda(s) de R$ 0.10\n", parteDec/10);
  parteDec = parteDec % 50 % 25 % 10;
  printf("%d moeda(s) de R$ 0.05\n", parteDec/5);
  parteDec = parteDec % 50 % 25 % 10 % 5;
  printf("%d moeda(s) de R$ 0.01\n", parteDec);
 /*int r100 = 0;
while(notas >= 100.0){
    notas -= 100.0;
    r100++;
  }
  printf()
  r100 = 0;
  printf("%d nota(s) de R$ 100.00\n", r100);
 
 */
 /* r100 = notas / 100;
  r50 = notas % 100 / 50;
  r20 = notas % 100 % 50 / 20;
  r10 = notas % 100 % 50 % 20 / 10;
  r5 = notas % 100 % 50 % 20 % 10 / 5;
  r2 = notas % 100 % 50 % 20 % 10 % 5 / 2;
  m1 = notas % 100 % 50 % 20 % 10 % 5 % 2 / 1;
  // MOEDAS:

  m50 = (notas % 100 % 50 % 20 % 10 % 5 % 2 % 1) * 100;
  m25 = notas % 100 % 50 % 20 % 10 % 5 % 2 % 1 % .5 / .25;
*/
  /*double moedas50 = 0;

  if (m50 >= 0.5)
  {
    m50 += moedas50;
    moedas50++;
  }*/
  /*moeda25 = notas % 100 % 50 % 20 % 10 % 5 % 2 % 1 % 0.50 / 0.25;
  moeda10 = notas % 100 % 50 % 20 % 10 % 5 % 2 % 1 % 0.50 % 0.25 / 0.1;
  moeda5
  moeda1c =*/
  //printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50", r100, r50, r20, r10, r5, r2, m1, m50);

  return 0;
}
