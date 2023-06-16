#include <bits/stdc++.h>

int main()
{
  
 int a, b, c, d;
    int dif;
    scanf("%d %d %d %d", &a, &c, &b, &d);
    dif = ((b*60)+d) - ((a*60)+c); // transforma horas em minutos
    if(dif<=0) dif += 24*60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dif/60, dif%60);
    return 0;
 /* int inicio,fim, inicioMin, fimMin;
  scanf("%d %d %d %d", &inicio,&inicioMin,&fim,&fimMin);
  if (inicio - fim == -1 && inicioMin > fimMin){
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",fim-inicio-1,60-(inicioMin-fimMin));
  } else if (inicio - fim == 0){
      if (inicioMin > fimMin){
       printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n",60-(inicioMin-fimMin));
      } else if (inicioMin < fimMin){
          printf("O JOGO DUROU 0 HORA(S) E 1 MINUTO(S)\n",24-inicio+fim, fimMin-inicioMin);
      }
    }else if(inicio > fim){
      if (inicioMin > fimMin){
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",23-inicio+fim,60-(inicioMin-fimMin));
      } else{
          printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24-inicio+fim, fimMin-inicioMin);
      }
    } else if(inicio < fim){
      if (inicioMin > fimMin){
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",fim-inicio,60-(inicioMin-fimMin));
      } else {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",fim-inicio,fimMin-inicioMin);
      }
    } else {
      printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }*/
  return 0;
}
