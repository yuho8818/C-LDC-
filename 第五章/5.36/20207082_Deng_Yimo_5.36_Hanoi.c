#include <stdio.h>
#include <windows.h>

void self_introduction();
void Tips();
void hanoi(int n , char a , char b , char c);//The starting column of Hanoi tower is a, the transition column is b, and the target column is c.

int main()
{


    char a = 'A', b = 'B', c = 'C'; //The three columns of Hanoi tower are A, B and C.
    int n = 0;

    Tips();
    printf ("%s\n\t\t              %s", "\n\t\t[System tips]:Please enter the number of plates on the starting column.", "(Enter '0' to end the program.):");
    scanf("%d" , &n);
    while(n)
    {
        printf ("\n\t\t[System tips]:The trajectory of the plates is as follows:\n\n");
        hanoi(n , a , b , c);
        printf("\n\t\t[System tips]:Press 'enter' to continue.");
        fflush(stdin);
        getchar();
        system("cls");
        Tips();
        printf ("%s\n\t\t              %s", "\n\t\t[System tips]:Please enter the number of plates on the starting column.", "(Enter '0' to end the program.):");
        scanf("%d" , &n);
    }
    system("cls");
    printf ("\n\t\t[System tips]:The program has completed execution.\n");
    Sleep(250);
    printf ("\n\t\t[System tips]:Thanks for using.\n\n");
    self_introduction();
    return 0;
}

void hanoi(int n , char a , char b , char c)
{
    if(n == 1)
    {
        printf ("\t\t\t\tPlate [%d] from [%c] to [%c]\n", n, a, c);
    }
    else
    {
        hanoi(n-1 , a , c , b);
        printf ("\t\t\t\tPlate [%d] from [%c] to [%c] \n", n, a, c);
        Sleep(150);
        hanoi(n-1 , b , a , c);
    }
}


void Tips()
{
    printf ("\n\n\t\t|--------------------------------|\n");
    printf ("\t\t|             *Tips*             |\n");
    printf ("\t\t|                                |\n");
    printf ("\t\t|      starting column:   'A'    |\n");
    printf ("\t\t|                                |\n");
    printf ("\t\t|     transition column:  'B'    |\n");
    printf ("\t\t|                                |\n");
    printf ("\t\t|        target column: 'C'      |\n");
    printf ("\t\t|                                |\n");
    printf ("\t\t|--------------------------------|\n");
    Sleep(350);
}

void self_introduction()
{
    int i = 0;
    printf ("\t\t");
    for (i = 0; i <= 9; i++)
    {
        printf ("*-");
        Sleep(50);
    }
    printf ("|"); Sleep(50);
    printf ("P"); Sleep(50);
    printf ("o"); Sleep(50);
    printf ("w"); Sleep(50);
    printf ("e"); Sleep(50);
    printf ("r"); Sleep(50);
    printf ("e"); Sleep(50);
    printf ("d"); Sleep(50);
    printf (" "); Sleep(50);
    printf ("b"); Sleep(50);
    printf ("y"); Sleep(50);
    printf (" "); Sleep(50);
    printf ("D"); Sleep(50);
    printf ("e"); Sleep(50);
    printf ("n"); Sleep(50);
    printf ("g"); Sleep(50);
    printf ("_"); Sleep(50);
    printf ("Y"); Sleep(50);
    printf ("i"); Sleep(50);
    printf ("M"); Sleep(50);
    printf ("o"); Sleep(50);
    printf ("|"); Sleep(50);
    for(i = 0; i <= 9; i++)
        {
            printf ("-*");
            Sleep(50);
        }
    Sleep(500);
    system("cls");
}
