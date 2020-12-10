#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *cfptr;
    if((cfptr = fopen("datasize.dat", "w")) == NULL){
        printf("Cannot open the file \"datasize,dat\".\n");
        return 0;
    }
    fprintf(cfptr, "%-20s%4s\n", "Data type", "Size");
    fprintf(cfptr, "%-20s%4d\n", "char", sizeof(char));
    fprintf(cfptr, "%-20s%4d\n", "unsigned char", sizeof(unsigned char));
    fprintf(cfptr, "%-20s%4d\n", "short int", sizeof(short int));
    fprintf(cfptr, "%-20s%4d\n", "unsigned short int", sizeof(unsigned short int));
    fprintf(cfptr, "%-20s%4d\n", "int", sizeof(int));
    fprintf(cfptr, "%-20s%4d\n", "unsigned int", sizeof(unsigned int));
    fprintf(cfptr, "%-20s%4d\n", "long int", sizeof(long int));
    fprintf(cfptr, "%-20s%4d\n", "unsigned long int", sizeof(unsigned long int));
    fprintf(cfptr, "%-20s%4d\n", "float", sizeof(float));
    fprintf(cfptr, "%-20s%4d\n", "double", sizeof(double));
    fprintf(cfptr, "%-20s%4d\n", "long double", sizeof(long double));
    fclose(cfptr);
    return 0;
}
