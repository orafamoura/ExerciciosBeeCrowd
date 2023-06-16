#include <bits/stdc++.h>

int main(){
  
  int a,par = 0, impar = 0, positivo = 0, negativo = 0;

  for (int i = 0; i < 5; ++i){
    scanf("%d", &a);
    if(a%2 == 0){
      par++;
    } 
    if(a%2 == 1) {
      impar++;
    }   
    if(a > 0){
      positivo++;
    } 
    if(a < 0){
      negativo++;
    }
  }
  printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, impar, positivo, negativo);
  return 0;
}