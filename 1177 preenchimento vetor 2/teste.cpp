#include <bits/stdc++.h>

int main(){

  int t, n[1000], aux=0;
  scanf("%d", &t);

  for (int i = 0; i < 1000; ++i){
   n[i] = aux; // i = 2 
    aux++; // 3 
    if (aux == t){ // true
      aux=0;
    }
    printf("N[%d] = %d\n", i, n[i]);
  }
  return 0;
}