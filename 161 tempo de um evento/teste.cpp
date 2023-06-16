#include <bits/stdc++.h>

int main()
{

  int d, h, m, s, d1, h1, m1, s1;
  char aux[10];

  scanf("%s %d %c %d %c %d %c %d\n", aux, &d, aux, &h, aux, &m, aux, &s);
  scanf("%s %d %c %d %c %d %c %d", aux, &d1, aux, &h1, aux, &m1, aux, &s1);
  
  d = d1 - d;
  h = h1 - h;
  m = m1 - m;
  s = s1 - s;
  
  if(s<0){
    s+=60;
    m--;
  }
  if (m<0){
    m+=60;
    h--;
  }
  if (h<0){
    h+=24;
    d--;
  }

  printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", d,h,m,s);
  return 0;
}