#include <bits/stdc++.h>

int main(){

  int instancia, bonus, ataque[2], defesa[2], level[2];
  scanf("%d",&instancia);

  do {
    scanf("%d %d %d %d %d %d %d", &bonus, &ataque[0], &defesa[0], &level[0], &ataque[1], &defesa[1], &level[1]);
    double valGolpe[2];
    
    valGolpe[0] = (ataque[0] + defesa[0]) / 2;
    if(level[0] %2 == 0){
      valGolpe[0] += bonus;
    }
    valGolpe[1] = (ataque[1] + defesa[1]) / 2;
    if(level[1] %2 == 0){
      valGolpe[1] += bonus;
    }
    if( valGolpe[0] > valGolpe[1]){
      printf("Dabriel\n");
    } else if( valGolpe[0] < valGolpe[1]){
      printf("Guarte\n");
    } else {
      printf("Empate\n");
    }
    instancia--;
  } while (instancia);
  return 0;
}