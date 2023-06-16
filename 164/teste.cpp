#include <bits/stdc++.h>

using namespace std;

int main() {

    double a[6];
    int i=0;

    for(i=0; i<6; ++i){
        cin >> a[i];
    }

    int positivos = 0;
    double media = 0;

    for(i=0; i<6; ++i){

        if(a[i]>0){
            positivos++;
            media += a[i];
        }

    }

    printf("%d valores positivos\n%.1f\n", positivos, media/positivos);
    //cout << positivos << " valores positivos\n" << media/positivos << "\n";

 return 0;
}
