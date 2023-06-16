#include <bits/stdc++.h>

using namespace std;

int main()
{
    int dias;
    scanf("%d", &dias);

    int ano = dias / 365;
    int mes = dias % 365 / 30;
    int dia = dias % 365 % 30;
    printf("%d ano(s)\n%d mes (es)\n%d dia (s)\n", ano, mes, dia);
      return 0;
}
