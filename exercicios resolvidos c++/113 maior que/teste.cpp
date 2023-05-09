#include <bits/stdc++.h>

using namespace std;

int main(){
    int A,B,C;
    
    scanf("%d %d %d", &A, &B, &C);
    
    int maior;
    
    if(B > A && C){
        maior = B;
    } else if(A > C){
        maior = A;
    } else {
        maior = C;
    }
    printf("%d eh o maior\n", maior);
      
      return 0;
}
