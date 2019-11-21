#include<stdio.h>

int main(void){
  int accountNumber;
  int range;
  int balance;
  short counter;

  do {
    puts("Please enter account number, range and balance.");
    fflush(stdout);
    scanf("%d%d%d", &accountNumber, &range, &balance);//get input

    if ( balance > range / 2 )
      printf("%d's balance is out of range.\n", accountNumber);
    
    ++counter; 
  } while ( counter <= 3 );

  return 0;
}
