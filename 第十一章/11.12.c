#include <stdio.h>
struct data{
    char id[5], name[20];
    int res;
    float cost;
} d[109];
int main()
{
    FILE *cfptr;
    int n = 0, l, i;
    char c[5];
    if((cfptr = fopen("hardware.dat", "r")) == NULL){
        printf("File don't exist.\n");
        return 0;
    }else {
        while(fscanf(cfptr, "%s", d[++n].id) != EOF){
            char t; l = 0;
            while((t = fgetc(cfptr)) != '"');
            while((t = fgetc(cfptr)) != '"')
                d[n].name[l++] = t;
            d[n].name[l] = '\0';
            fscanf(cfptr, "%d%f", &d[n].res, &d[n].cost);
            if(d[n].res == 0) n--;
        }
        fclose(cfptr);
    }
    printf("Please enter the id of hardware you want update.\n");
    scanf("%s", c);
    for(i = 1; i < n; i++){
        if(!strcmp(c, d[i].id)){
            printf("Please enter the remain number of the stuff.\n");
            scanf("%d", &l);
            d[i].res = l;
            break;
        }
    }

    if((cfptr = fopen("hardware.dat", "w")) == NULL){
        printf("Cannot open the file.\n");
        return 0;
    }
    for(i = 1; i < n; i++){
        fprintf(cfptr, "%s \"%s\" %d %.2f\n", d[i].id, d[i].name, d[i].res, d[i].cost);
    }
    fclose(cfptr);
    return 0;
}
