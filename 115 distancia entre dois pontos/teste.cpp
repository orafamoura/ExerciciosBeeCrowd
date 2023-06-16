#include <bits/stdc++.h>

using namespace std;

int main(){
  float x1, y1;
  float x2, y2;
   cin >> x1 >> y1 >> x2 >> y2;
  
  //double x3 = (x2 - x1) * (x2 - x1);
  //double y3 = (y2 - y1) * (y2 - y1);
  
  //double result = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));

  printf("%.4lf", sqrt(pow((x2 - x1),2) + pow((y2 - y1),2)));
      return 0;
}
