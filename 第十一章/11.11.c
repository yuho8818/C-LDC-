#include <stdio.h>

struct person{
    char lastName[15];
    char firstName[15];
    char age[4];
} q[109];

void Readrecord(FILE *cfptr, struct person *a){
    char t;
    int l = 0;
    while((t = fgetc(cfptr)) != '"');
    while((t = fgetc(cfptr)) != '"'){
        a -> firstName[l++] = t;
    }
    a -> firstName[l] = '\0';
    l = 0;
    while((t = fgetc(cfptr)) != '"');
    while((t = fgetc(cfptr)) != '"'){
        a -> lastName[l++] = t;
    }
    a -> lastName[l] = '\0';
    l = 0;
    while((t = fgetc(cfptr)) != '"');
    while((t = fgetc(cfptr)) != '"'){
        a -> age[l++] = t;
    }
    a -> age[l] = '\0';

}
void print(){
    FILE *cfptr;
    if((cfptr = fopen("nameage.dat", "w")) == NULL){
        printf("Cannot open the file.\n");
        return ;
    }
    int i;
    for(i = 1; i <= 100; i++)
        fprintf(cfptr, "firstname=\"%s\" lastname=\"%s\" age=\"%s\"\n", q[i].firstName, q[i].lastName, q[i].age);
    fclose(cfptr);

}
int readfile(){
    FILE *cfptr;
    if((cfptr = fopen("nameage.dat", "r")) == NULL){
        printf("Cannot open the file.\n");
        return 0;
    }
    int i;
    for(i = 1; i <= 100; i++)
        Readrecord(cfptr, &q[i]);
    fclose(cfptr);
    return 1;
}
void init(){
    int i;
    for(i = 1; i <= 100; i++){
        strcpy(q[i].lastName, "unasigned");
        strcpy(q[i].firstName, "");
        strcpy(q[i].age, "0");
    }
    print();
}
void read10(){
    int i, j, f;
    system("cls");
    if(!readfile())return ;
    for(i = 1; i <= 10; i++){
        f = -1;
        for(j = 1; j <= 100; j++){
            if(!strcmp(q[j].lastName, "unasigned")){
                f = j;
                break;
            }
        }
        if(f == -1){
            printf("100 record is full filled(or you didn't initialized), try to delete some record\n");
            return ;
        }
        printf("Enter the %2dth person's data, (first name, last name, age, input in order)\n", i);
        scanf("%s %s %s", q[f].firstName, q[f].lastName, q[f].age);
    }
    print();
}

void update(){
    if(!readfile())return ;
    int num;
    printf("Please enter the id of data you want to update.(1 to 100)\n");
    scanf("%d", &num);
    if(num <= 0 || num > 100){
        printf("Wrong id !!\n");
        return ;
    }
    printf("Enter the %2dth person's data, (first name, last name, age, input in order)\n", num);
    scanf("%s %s %s", q[num].firstName, q[num].lastName, q[num].age);
    print();
}

void Delete(){
    if(!readfile())return ;
    int num;
    printf("Please enter the id of data you want to delete.(1 to 100)\n");
    scanf("%d", &num);
    strcpy(q[num].lastName, "unasigned");
    strcpy(q[num].firstName, "");
    strcpy(q[num].age, "0");
    printf("Delete successfully.\n");
    print();
}
int main()
{
    FILE *cfptr;
    int i, choice;
    do{
        system("cls");
        printf("Enter 1 to initialize all record.\n");
        printf("Enter 2 to read 10 record.\n");
        printf("Enter 3 to update a record.\n");
        printf("Enter 4 to delete a record.\n");
        printf("Enter 0 to exit.\n\n");
        scanf("%d",&choice);
        printf("\n\n");
        switch(choice){
            case 0: printf("Thank you. Exiting...\n");break;
            case 1: init(); break;
            case 2: read10(); break;
            case 3: update(); break;
            case 4: Delete(); break;
            default: printf("No such choice. Please enter a right choice (0-4)!\n");
        }
        if(choice)
            printf("\n\nPress any key to continue.");
        getch();
    }while(choice);
    return 0;
}
