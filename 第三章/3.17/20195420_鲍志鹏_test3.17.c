#include<stdio.h>

int main(void){
  int accountNumber;
  float balance, totalCharges, totalCredits, creditLimits;
  puts("Enter account number ( -1 to end ):");
  fflush(stdout);
  scanf("%d", &accountNumber);
  while ( accountNumber != -1 ){
    printf("\nEnter beginning balance:");
    fflush(stdout);
    scanf("%f", &balance);
    printf("Enter total charges:");
    fflush(stdout);
    scanf("%f", &totalCharges);
    printf("Enter total credits:");
    fflush(stdout);
    scanf("%f", &totalCredits);
    printf("Enter credit limit:");
    fflush(stdout);
    scanf("%f", &creditLimits);
    balance = balance + totalCharges - totalCredits;
    if ( balance > creditLimits )
      printf("Accout:\t%d\nCredit limit:\t%.2f\nBalance:\t%.2f\nCredit Limit Exceeded.\n", accountNumber, creditLimits, balance);
    printf("Enter account number ( -1 to end ):");
    fflush(stdout);
    scanf("%d", &accountNumber);
  }
  return 0;
}
