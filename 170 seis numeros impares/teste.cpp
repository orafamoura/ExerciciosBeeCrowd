#include <bits/stdc++.h>

int main(){
  
  int a;

  scanf("%d",&a);

  if(a%2 == 0){ // par
    a++;
  }

  for (int i = 0; i < 12; ++i){
    if(a%2 == 1){
    printf("%d\n",a);
    }
    a += 1;
  }
  return 0;
}