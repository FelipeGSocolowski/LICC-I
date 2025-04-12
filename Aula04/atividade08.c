#include <stdio.h>

int main() {
  double num1, num2, r;

  char c;

  scanf("%lf %c %lf", &num1, &c, &num2);

  switch(c) {
    case '+': r = num1 + num2;
      break;
    case '-': r = num1 - num2;
      break;
    case '*': r = num1 * num2;
      break;
    case '/': r = num1 / num2;
      break;
  }

  printf("%.2lf", r);

  return 0;
}