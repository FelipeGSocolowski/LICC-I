#include <stdio.h>

int main() {
  double a, b, c, d, m;
  
  double min(double n1, double n2, double n3, double n4) {
    double lesser;
    
    if(n1 <= n2 && n1 <= n3 && n1 <= n4) {
      lesser = n1;
    } else if(n2 <= n3 && n2 <= n4) {
      lesser = n2;
    } else if(n3 <= n4) {
      lesser = n3;
    } else {
      lesser = n4;
    }
    
    return lesser;
  }
  
  scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
  
  m = (a + b + c + d - min(a, b, c, d)) / 3;
  
  printf("%.4lf\n", m);

  return 0;
}