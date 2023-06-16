#include <bits/stdc++.h>

int main(){

  double notas [105][8];
  char nomes [105][50];

  int quantpessoas;
  scanf("%d",&quantpessoas);

  for (int i = 0; i < quantpessoas; ++i){
    scanf("%s",nomes[i]);
    for (int j = 0; j < 8; ++j){
      scanf("%lf", &notas[i][j]);
    }
  }
  double notasFinais[105];
  for (int i = 0; i < quantpessoas; ++i){
    double maior = -1, menor = 11;
    notasFinais[i]=0;
    for (int j = 1; j < 8; ++j){
    if (notas[i][j] > maior){
      maior = notas[i][j];
    } 
    if (notas[i][j] < menor){
      menor = notas[i][j];
    }
      notasFinais[i] += notas[i][j];
    }
    notasFinais[i] -= maior + menor;
    notasFinais[i] *= notas[i][0];
    printf("%s %.2lf\n", nomes[i],notasFinais[i]);
  }
  return 0;
}
