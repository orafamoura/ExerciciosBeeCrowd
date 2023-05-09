#include <bits/stdc++.h>

using namespace std;

int main(){
      double A, B, C; 
      cin >> A >> B >> C;

      //double triangle = (A * C) / 2;
      //double circle = 3.14159 * (C * C);
      //double trapeze = (A + B) * C / 2;
      //double square = B * B;
      //double rectangle = A * B;

      printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", (A * C) / 2, 3.14159 * (C * C), (A + B) * C / 2, B * B, A * B);

      return 0;
}
