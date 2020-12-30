#include <stdio.h>
char s[10], ans[10];
FILE *cfptr;
void dfs(int d){
    int i;
    if(d == 7){
        fprintf(cfptr, "%s\n", ans);
        return ;
    }
    for(i = 0; i < 3; i++){
        ans[d] = (s[d] - '0' - 2) * 3 + i + 'A';
        dfs(d + 1);
    }
}
int main()
{
    if((cfptr = fopen("words.dat", "w")) == NULL){
        printf("Cannot open the file.\n");
        return 0;
    }
    printf("Please enter the number.(7 characters)\n");
    scanf("%s", s);
    dfs(0);
    fclose(cfptr);
    return 0;
}
