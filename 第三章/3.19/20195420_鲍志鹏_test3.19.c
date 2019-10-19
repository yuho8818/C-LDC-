#include<stdio.h>

int main(void){
  int days;
  float principal, rate;
  printf("Enter loan principal( -1 to end ):");
  fflush(stdout);
  scanf("%f", &principal);
  while ( principal != -1 ){
    printf("Enter intrest rate:");
    fflush(stdout);
    scanf("%f", &rate);
    printf("Enter the term of the loan in days:");
    fflush(stdout);
    scanf("%d", &days);
    printf("The intrest charge is $%.2f\n", principal * rate * days / 365);
    printf("Enter loan principal( -1 to end ):");
    fflush(stdout);
    scanf("%f", &principal);
  }
  return 0;
}
