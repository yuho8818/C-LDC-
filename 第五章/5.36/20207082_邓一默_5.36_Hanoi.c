#include<stdio.h>

//20207082Deng_Yimo
void hanoi(int n , char a , char b , char c);//The starting column of Hanoi tower is a, the transition column is b, and the target column is c.

int main(){
    char a = 'A';
    char b = 'B';
    char c = 'C';
    //The three columns of Hanoi tower are A, B and C.
    int n;

    printf ("The starting column of Hanoi tower is A, the transition column is B, and the target column is C.\n");
    printf("Please enter the number of plates on the starting column£º\n");
    scanf("%d" , &n);
    printf ("The trajectory of the plate is as follows£º");
    hanoi(n , a , b , c);
    printf ("Press enter to end the program.");
    return 0;
}

void hanoi(int n , char a , char b , char c){
//All the plates from 1 to n-1 are regarded as a whole1.

//The nth plate is regarded as a whole2.

//The whole Hanoi function only needs to pay attention to the call relationship between 1 and 2 (written in else)
//and the baseline condition (written in if).
    if(n == 1){
        printf("Plate %d from %c to %c\n", n , a , c);
        }//Move the plate directly from A to C.

    else{
        hanoi(n-1 , a , c , b);//Move ¢Ù to the transition column.
        printf("Plate %d from %c to %c \n" , n , a , c);//Move ¢Ú to the target column.
        hanoi(n-1 , b , a , c);//Move ¢Ù from transition column to target column.
        }
}
