#include <bits/stdc++.h>

using namespace std;

int main() {

     int funcionarios, horasTrabalhadas;
     double salario;

     cin >> funcionarios >> horasTrabalhadas >> salario;
    // cout << "NUMBER = " << funcionarios << '\n' << "SALARY = U$ " << salario * horasTrabalhadas << '\n';
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", funcionarios, salario * horasTrabalhadas); 
 return 0;
}

