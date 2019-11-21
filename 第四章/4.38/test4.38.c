#include <stdio.h>

int main(void){
  puts("The twelve days of Christmas");
  
  for (int day = 1;day <= 12; ++day){
    switch (day){
    case 1:
      printf("%s", "On the first day of Christmas, my true love sent to me: ");
      break;
      
    case 2:
      printf("%s", "On the second day of Christmas, my true love sent to me: ");
      break;

    case 3:
      printf("%s", "On the third day of Christmas, my true love sent to me: ");
      break;

    case 4:
      printf("%s", "On the fourth day of Christmas, my true love sent to me: ");
      break;

    case 5:
      printf("%s", "On the fifth day of Christmas, my true love sent to me: ");
      break;

    case 6:
      printf("%s", "On the sixth day of Christmas, my true love sent to me: ");
      break;

    case 7:
      printf("%s", "On the seventh day of Christmas, my true love sent to me: ");
      break;

    case 8:
      printf("%s", "On the eighth day of Christmas, my true love sent to me: ");
      break;

    case 9:
      printf("%s", "On the ninth day of Christmas, my true love sent to me: ");
      break;

    case 10:
      printf("%s", "On the tenth day of Christmas, my true love sent to me: ");
      break;

    case 11:
      printf("%s", "On the eleventh day of Christmas, my true love sent to me: ");
      break;

    case 12:
      printf("%s", "On the twelfth day of Christmas, my true love sent to me: ");
      break;      
    }

    switch (day){
    case 1:
      printf("%s", "A partridge in a pear tree!\n");
      break;
      
    case 12:
      printf("%s", "Twelve drummers drumming, ");

    case 11:
      printf("%s", "Eleven pipers pipping, ");

    case 10:
      printf("%s", "Ten lords a-leaping, ");

    case 9:
      printf("%s", "Nine ladies dancing, ");

    case 8:
      printf("%s", "Eight maids a-milking, ");

    case 7:
      printf("%s", "Seven swans a-swimming, ");

    case 6:
      printf("%s", "Six geese a-laying, ");

    case 5:
      printf("%s", "Five golden rings, ");

    case 4:
      printf("%s", "Four calling birds, ");

    case 3:
      printf("%s", "Three French hens, ");

    case 2:
      printf("%s", "Two turtle doves, ");

      printf("%s", "And a partridge in a pear tree!\n");
    }    
  }

  return 0;
}
