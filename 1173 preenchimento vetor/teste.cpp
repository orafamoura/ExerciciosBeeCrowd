#include <bits/stdc++.h>

int main(){

  int x, n[10];
  scanf("%d", &x);
  n[0] = x;
  printf("N[0] = %d\n",n[0]);
  
  for (int i = 1; i < 10; ++i){
    n[i] = 2 * n[i - 1];
    printf("N[%d] = %d\n",i, n[i]);
  }
  return 0;
}