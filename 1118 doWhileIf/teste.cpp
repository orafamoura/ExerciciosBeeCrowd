#include <bits/stdc++.h>

int main(){

double a,b;
int numero;
do{
  numero = 1;
scanf("%lf", &a);
  if(a < 0 || a > 10 ){
    printf("nota invalida\n");
  } else {
    do{
      scanf("%lf", &b);
      if(b < 0 || b > 10){
        printf("nota invalida\n");
      } else {
        printf("media = %.2lf\n", (a + b) / 2);
        do {  
          printf("novo calculo (1-sim 2-nao)\n");
          scanf("%d", &numero);
        } while(numero < 1 || numero > 2);
      }
    } while(b < 0 || b > 10);
  }
} while(numero != 2);
  return 0;
}
