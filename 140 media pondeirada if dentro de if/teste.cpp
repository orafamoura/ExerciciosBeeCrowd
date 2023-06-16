#include <bits/stdc++.h>

using namespace std;

int main()
{
double n1, n2, n3, n4;
double media, notaExame;

scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

media = ((n1 * 2) + (n2 * 3)+ (n3 * 4) + n4) / 10.0;

if (media >= 7.0){
  printf("Media: %.1lf\nAluno aprovado.\n", media);
} else if ( media < 5.0){
  printf("Media: %.1lf\nAluno reprovado.\n", media);
} else {
scanf("%lf", &notaExame);
if (((media + notaExame)/2) >= 5.0 ){
  printf("Media: %.1lf\nAluno em exame.\nNota do exame: %.1lf\nAluno aprovado.\nMedia final: %.1lf\n", media, notaExame,(media + notaExame)/2);
} else {
  printf("Media: %.1lf\nAluno em exame.\nNota do exame: %.1lf\nAluno reprovado.\nMedia final: %.1lf\n", media, notaExame,(media + notaExame)/2);
}
}
  return 0;
}
