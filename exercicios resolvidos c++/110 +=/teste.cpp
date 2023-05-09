#include <bits/stdc++.h>

using namespace std;

int main(){
      int codigo, numeroPecas;
      double valor;
      int i;
      double saldo = 0;
      
      for ( i = 0; i < 2 ; ++i){
            cin >> codigo >> numeroPecas >> valor; 
            saldo += numeroPecas * valor;
            //saldo = numeroPecas * valor + saldo;
      }
      
      printf("VALOR A PAGAR: R$ %.2lf\n", saldo);
      return 0;
}
