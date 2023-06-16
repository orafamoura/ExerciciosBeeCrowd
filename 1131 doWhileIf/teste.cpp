#include <bits/stdc++.h>

int main(){

  int inter,gremio,numero;
  int grenais = 0;
  int jogosInter = 0;
  int jogosGremio = 0;
  int empates = 0;
  do{
    scanf("%d %d", &inter,&gremio);
    if(inter > gremio){
      jogosInter++;
      grenais++;
    } else if (gremio > inter){
      jogosGremio++;
      grenais++;
    } else {
      empates++;
      grenais++;
    }
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &numero);
  }while(numero != 2);

  printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", grenais, jogosInter, jogosGremio, empates);
  if ( jogosGremio > jogosInter){
    printf("Gremio venceu mais\n");
  } else if(jogosInter > jogosGremio) {
    printf("Inter venceu mais\n");
  } else {
    printf("Nao houve vencedor\n");
  }
  return 0;
}
