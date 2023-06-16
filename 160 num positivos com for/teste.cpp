#include <bits/stdc++.h>

int main(){

  double numeros;
  int positive = 0;
  for (int i = 0; i < 6; ++i){
    scanf("%lf",&numeros); 
    if(numeros > 0){
      positive++;
    }
  }
  printf("%d valores positivos\n",positive);
  return 0;
}