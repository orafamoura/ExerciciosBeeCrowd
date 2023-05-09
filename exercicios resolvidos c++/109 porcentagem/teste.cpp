#include <bits/stdc++.h>

using namespace std;

int main() {
      string nome;
     double salarioFixo, totalVendas;

     cin >> nome >> salarioFixo >> totalVendas;

      printf("TOTAL = R$ %.2lf\n", totalVendas * 0.15 + salarioFixo);

 return 0;
}

