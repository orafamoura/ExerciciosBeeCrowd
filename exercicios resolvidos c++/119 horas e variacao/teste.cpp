#include <bits/stdc++.h>

using namespace std;

int main()
{
      int tempoSeg;
    /*int temposeg;
    int horas = 0, minutos=0;
    while(1){
        if(temposeg >= 3600){
            temposeg -= 3600;
            horas++;
        }else if(temposeg >= 60){
            temposeg -= 60;
            minutos++;
        }

        if(temposeg<60){
            break;
        }
    }*/

      scanf("%d", &tempoSeg);
      int segundos = tempoSeg % 60 % 60;
      int minutos = tempoSeg % 3600 / 60;
      int horas = tempoSeg / 3600;

      printf("%d:%d:%d\n", horas, minutos, segundos);
      return 0;
}
