#include <stdio.h>
#include <stdlib.h>
#define READ 10
#define WRITE 11
#define LOAD 20
#define STORE 21
#define ADD 30
#define SUBTRACT 31
#define DIVIDE 32
#define MULTIPLY 33
#define BRANCH 40
#define BRANCHNEG 41
#define BRANCHZERO 42
#define HALT 43
FILE *fin, *fout;
int memory[100], cnt, p;
int accumulator, instructionCounter, instructionRegister, operationCode, operand;
void init(){
    printf("*** Welcome to Simpletron! ***\n");
    printf("*** Please enter your program one instruction ***\n");
    printf("*** (or data word) at a time. I will type the ***\n");
    printf("*** location number and a question mark  (?). ***\n");
    printf("*** You then type the word for that location. ***\n");
    printf("*** Type the sentinel -99999 to stop entering ***\n");
    printf("*** your program. ***\n");
    memset(memory, 0, sizeof(memory));
    accumulator = 0;
    instructionCounter = 0;
    instructionRegister = 0;
    operationCode = 0;
    operand = 0;
    cnt = 0;
}
void Computer_dump(){
    int i, j;
    fprintf(fout, "REGISTERS:\n");
    fprintf(fout, "%-40s%+04d\n", "accumulator", accumulator);
    fprintf(fout, "%-40s%+04d\n", "instructionCounter", instructionCounter);
    fprintf(fout, "%-40s%+04d\n", "instructionRegister", instructionRegister);
    fprintf(fout, "%-40s%+04d\n", "operationCode", operationCode);
    fprintf(fout, "%-40s%+04d\n", "operand", operand);
    fprintf(fout, "\nMEMORY:\n");
    fprintf(fout, "%2s %5d %5d %5d %5d %5d %5d %5d %5d %5d %5d\n", "", 0, 1, 2, 3, 4, 5, 6, 7, 8, 9);
    for(i = 0; i < 10; i++){
        fprintf(fout, "%2d", i);
        for(j = 0; j < 10; j++){
            fprintf(fout, " %+05d", memory[i * 10 + j]);
        }
        fprintf(fout, "\n");
    }
}
int main()
{
    if(access("code.sim", 0)){
        printf("cannot find your program.\n");
        return 0;
    }
    fin = fopen("code.sim", "r");
    fout = fopen("dump.sim", "w");
    init();
    while(1){
        if(cnt >= 100){
            printf("Your input too many code.\n");
            return 0;
        }
        fscanf(fin, "%d", &p);
        if(p == -99999){
            printf("*** program loading completed ***\n");
            printf("*** program execution begins  ***\n");
            break;
        }
        memory[cnt] = p;
        cnt++;
    }


    while(1){
        instructionRegister = memory[instructionCounter];
        operationCode = instructionRegister / 100;
        operand = instructionRegister % 100;
        if(operationCode == HALT){
            printf("***  Simpletron execution terminated.  ***\n");
            Computer_dump();
            return 0;
        }
        if(operationCode == READ){
            scanf("%d", &p);
            if(p > 9999 || p < -9999){
                printf("operationcode or accumulator overflowed.\n");
                goto Ennd;
            }
            memory[operand] = p;
        }
        if(operationCode == WRITE)
            printf("%d\n", memory[operand]),
            fprintf(fout, "%d\n", memory[operand]);

        if(operationCode == LOAD)
            accumulator = memory[operand];

        if(operationCode == STORE)
            memory[operand] = accumulator;

        if(operationCode == ADD)
            accumulator += memory[operand];

        if(operationCode == SUBTRACT)
            accumulator -= memory[operand];

        if(operationCode == DIVIDE){
            if(memory[operand] == 0){
                printf("DIVISOR is ZERO!!!\n");
                goto Ennd;
            }
            operationCode /= memory[operand];
        }

        if(operationCode == MULTIPLY)
            operationCode *= memory[operand];

        if(operationCode == BRANCH){
            instructionCounter = operand;
            continue;
        }

        if(operationCode == BRANCHNEG)
            if(accumulator < 0){
                instructionCounter = operand;
                continue;
            }

        if(operationCode == BRANCHZERO)
            if(accumulator == 0){
                instructionCounter = operand;
                continue;
            }
        if(accumulator > 9999 || accumulator < -9999){
            printf("Algebra Overflowed.\n");
            goto Ennd;
        }
        instructionCounter++;
    }
Ennd:
    fclose(fin);
    fclose(fout);
    return 0;
}
