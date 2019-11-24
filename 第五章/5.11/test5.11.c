#include <stdio.h>
#include <math.h>

double round2Integer(double number);
double round2Tenth(double number);
double round2Hundreds(double number);
double round2Thousandths(double number);

int main(void){
  double (*func[4])(double) = {round2Integer, round2Tenth, round2Hundreds, round2Thousandths};
  int choice;
  double number;
  

  do {
    printf("%s\n%s\n%s\n%s\n%s\n%s\n",
	   "Please select a function.",
	   "Enter 1 for *integer*",
	   "Enter 2 for *tenth*",
	   "Enter 3 for *hundreds",
	   "Enter 4 for *thousands*",
	   "Enter other number to exit"); // menu
    fflush(stdout);
    scanf("%d", &choice);
    if (!(choice >= 1 && choice <= 4)){
      break;
    }
    printf("%s", "Enter a number:");
    fflush(stdout);
    scanf("%lf", &number);
    
    printf("%f\n", (*func[choice - 1])(number));
    // invoke function
  } while (choice >= 1 && choice <= 4);

  return 0;
}

double round2Integer(double number){
  return floor(number * 10 + .5) / 10;
}

double round2Tenth(double number){
  return floor(number * 100 + .5) / 100;
}

double round2Hundreds(double number){
  return floor(number * 1000 + .5) / 1000;
}

double round2Thousandths(double number){
  return floor(number * 10000 + .5) / 10000;
}
