#include <bits/stdc++.h>

int main()
{

  int inicio,fim;
  scanf("%d %d", &inicio,&fim);
  
  if(inicio > fim){
    printf("O JOGO DUROU %d HORA(S)\n",24-inicio+fim);
  } else if(fim > inicio){
    printf("O JOGO DUROU %d HORA(S)\n",fim - inicio);
  } else {
    printf("O JOGO DUROU 24 HORA(S)\n");
  }
  return 0;
}
