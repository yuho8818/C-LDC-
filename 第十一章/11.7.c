#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *cfptr;
    if((cfptr = fopen("oldmast.dat", "w")) == NULL){
        printf("Fail to open file.\n");
    }else {
        fprintf(cfptr, "%d %s %.2lf\n", 100, "Alan Jones", 348.17);
        fprintf(cfptr, "%d %s %.2lf\n", 300, "Mary Smith", 27.19);
        fprintf(cfptr, "%d %s %.2lf\n", 500, "Sam Sharp", 0.00);
        fprintf(cfptr, "%d %s %.2lf\n", 700, "Suzy Green", -14.22);
        fclose(cfptr);
    }
    if((cfptr = fopen("trans.dat", "w")) == NULL){
        printf("Fail to open file.\n");
    }else {
        fprintf(cfptr, "%d %.2lf\n", 100, 27.14);
        fprintf(cfptr, "%d %.2lf\n", 300, 62.11);
        fprintf(cfptr, "%d %.2lf\n", 400, 100.56);
        fprintf(cfptr, "%d %.2lf\n", 900, 82.17);
        fclose(cfptr);
    }
    return 0;
}
