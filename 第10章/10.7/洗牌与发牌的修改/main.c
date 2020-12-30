//
//  main.c
//  洗牌与发牌的修改
//  The modification of shuffling and dealing
//
//10.7  (洗牌与发牌的修改)请用高效的洗牌算法(如图10.3所示)来更改图10.16 的程序。
//10.7  (Shuffle and deal modification) Use an efficient shuffle algorithm (shown in Figure 10.3) to change the program in Figure 10.16.
//      按照两列格式打印洗完牌后的结果，列的标题分别为face和suit。在每张牌前面标出它的颜色。
//      Print the shuffled result in a two-column format with the column headings Face and Suit, respectively. Mark the color of each card in front of it.
//
//  Created by DarXs.dx on 2020/11/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define CARDS 52
#define FACES 13

struct Card{
    char *face;
    char *suit;
};

typedef struct Card card;

void make( card *pai );
void wash( card *pai );
void out( card *pai );

int main(void) {
    
    srand((unsigned int)time(NULL));
    
    card pai[CARDS];
    make( pai );
    wash( pai );
    out( pai );
    return 0;
}

void make( card *pai ){             //make the default cards order
    char *face[] = {"Ace","Deuce","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Qween","King"};
    char *suit[] = {"Heart","Diamonds","Clubs","Spades"};
    
    int i ;
    for( i=0 ; i<CARDS ; i++ ){
        pai[i].face = face[ i % FACES ];
        pai[i].suit = suit[ i / FACES ];
    }
}

void wash( card *pai ){             //wash the cards by randomly swtich them
    int i , j ;
    card t;
    for( i=0 ; i<CARDS ; i++ ){
        j = rand()%CARDS ;
        t = pai[i] ;
        pai[i] = pai[j] ;
        pai[j] = t ;
    }
}

void out( card *pai ){                 //print(output) the cards in given order(format)
    printf("color  %5s    %-8s\n\n","face","suit");
    
    int i;
    for( i=0 ; i<CARDS ; i++ ){        //first print the color of these cards
        if( strcmp( pai[i].suit , "Diamonds" )==0 || strcmp( pai[i].suit , "Heart" )==0 ){
            printf(" Red   ");
        }
        else{
            printf("Black  ");
        }
        
        printf("%5s of %-8s\n", pai[i].face , pai[i].suit );
    }
    
}

