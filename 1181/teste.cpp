#include <bits/stdc++.h>

int main(){

  int c;
  char opera;
  double m[12][12];
  scanf("%d", &c);
  getchar();
  opera = getchar();

  for (int i = 0; i < 12; ++i){ // 0 
   for (int j = 0; j < 12; ++j){ // 1
    scanf("%lf", &m[i][j]); // 0 1
   }
  }
   double aux = 0;
    for (int i = 0; i < 12; ++i){
     aux += m[i][c]; // 0 5 1 5 2 5 3 5
    }
  if(opera == 'S'){ // CARACTER ASPAS SIMPLES
    printf("%.1lf\n", aux);
  } else {
    printf("%.1lf\n", aux/12);
  }
  return 0;
}