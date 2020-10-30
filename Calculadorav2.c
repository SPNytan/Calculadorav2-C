#include <stdio.h>

int main() {
  char operator;
  double n1,n2;
  printf("Enter an operator(+,-,*,/): ");
  scanf("%c", &operator);
  printf("Enter two numbers: ");
  scanf("%lf %lf", &n1, &n2);
  switch(operator) {
    case '+':
    printf("%lf+%lf = %lf\n", n1, n2, n1+n2);
    break;
    case '-':
    printf("%lf-%lf = %lf\n", n1, n2, n1-n2);
    break;
    case '*':
    printf("%lf*%lf = %lf\n", n1, n2, n1*n2);
    break;
    case '/':
    printf("%lf/%lf = %lf\n", n1, n2, n1/n2);
    //operator doesn't match any case constant +,-,*,/
    default:
    printf("Error!\noperator not found");
  }
  return 0;
}