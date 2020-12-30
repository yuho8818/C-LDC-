#include <stdio.h>
#include <stdlib.h>
#define SIZE 80

int main()
{
    FILE *cfptr;
    int c, opt;
    char sentence[SIZE], PATH1[SIZE], PATH2[SIZE];
    int i = 0;
    printf("Enter 1 for inputing from screen, 2 for reading from file.\n");
    scanf("%d", &opt);
    if(opt == 1){
        puts("Enter a line of text:");
        while((i < SIZE - 1) && (c = getchar()) != '\n'){
            sentence[i++] = c;
        }
        sentence[i] = '\0';
        puts("\nThe line entered was:");
        puts(sentence);
    }else if(opt == 2){
        printf("Please input the input file's path.\n");
        scanf("%s", PATH1);
        if(access(PATH1, 0)){
            printf("Input file doesn't exist.\n");
            return 0;
        }
        printf("Please input the output file's path.\n");
        scanf("%s", PATH2);
        cfptr = fopen(PATH1, "r");
        while((i < SIZE - 1) && (c = fgetc(cfptr)) != '\n'){
            sentence[i++] = c;
        }
        sentence[i] = '\0';
        fclose(cfptr);
        cfptr = fopen(PATH2, "w");
        fputs(sentence, cfptr);
        fclose(cfptr);
    }
    return 0;
}
