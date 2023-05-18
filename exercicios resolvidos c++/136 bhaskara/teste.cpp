#include <bits/stdc++.h>

using namespace std;

int main()
{

  double a, b, c;
  double x1, x2;

  scanf("%lf %lf %lf", &a, &b, &c);

  // printf("%lf %lf %lf\n",a,b,c);
  if ((a == 0.0) || (b == 0.0) || (c == 0.0))
  {
    printf("Impossivel calcular\n");
  }
  else if ((pow(b, 2) - (4 * a * c)) < 0.0 || ((pow(b, 2) - (4 * a * c)) < 0.0))
    {
      printf("Impossivel calcular\n");
    }
    else{
      x1 = (-b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
      x2 = (-b - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
      printf("R1 = %.5lf\nR2 = %.5lf\n", x1, x2);
    }
    // ax quadrado + bx + c = 0;
    return 0;
  }
