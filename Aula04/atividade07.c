#include <stdio.h>

#include <math.h>

int main() {
  double a, b, c, delta;

  scanf("%lf %lf %lf", &a, &b, &c);

  delta = sqrt(pow(b, 2) - 4*a*c);
  
  if(delta == 0) {
    printf("%.3lf\n", (-b)/(2*a));
  } else if(pow(b, 2) - 4*a*c < 0) {
    printf("NAO EXISTE RAIZ REAL\n");
  } else {
    printf("%.3lf %.3lf\n", ((-b)-delta)/(2*a), ((-b)+delta)/(2*a));
  }

  return 0;
}