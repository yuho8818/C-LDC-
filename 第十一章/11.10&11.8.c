#include <stdio.h>
#include <stdlib.h>
typedef struct dat{
    int id;
    char LastName[20];
    char FirstName[20];
    double res;
}data;
int main()
{
	data account[209];
	int id = -1, f = 0, cnt = 0, l = 0, i;
	double amount = 0;
    FILE *optr, *tptr, *nptr;
    if((optr = fopen("oldmast.dat", "r")) == NULL){
        printf("Can't open the file oldmst.dat");
        return 0;
    }
    if((tptr = fopen("trans.dat", "r")) == NULL){
        printf("Can't open the file trans.dat");
        return 0;
    }
    if((nptr = fopen("newmast.dat", "w")) == NULL){
        printf("Can't open the file newmast.dat");
        return 0;
    }
    while(fscanf(optr, "%d %s %s %lf", &account[cnt].id, account[cnt].FirstName, account[cnt].LastName, &account[cnt].res) != EOF) cnt++;
    while(fscanf(tptr, "%d %lf", &id, & amount) != EOF){
        while(account[l].id < id && l < cnt) l++;
        if(l >= cnt || account[l].id != id){
            printf("未匹配的账户号码为%d的交易记录\n", id);
        }else {
            account[l].res += amount;
        }
    }
    for(i = 0; i < cnt; i++)
        fprintf(nptr, "%d %s %s %.2lf\n", account[i].id, account[i].FirstName, account[i].LastName, account[i].res);
	fclose(optr); fclose(nptr); fclose(tptr);
    return 0;
}
