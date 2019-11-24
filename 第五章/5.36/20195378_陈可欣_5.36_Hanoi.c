    #include<stdio.h>
    #include<windows.h>
    int num,i;
    long long frequency,unfinished;
    int Account_frequency(int n);
    void arrow(int num,char a,char b);
    int detail_process(long long m,char start,char help,char end);
    void chart(int number);
    int main()
    {
        printf("let's begin our game!\n");
        Sleep(200);
    for(i=1;i<=40;i++)
        {printf("*");Sleep(30);}
        printf("\n");
        Sleep(200);
        chart(num);
        printf("How many layers do you want?\n");
        scanf("%d",&num);
        printf("the frequency you should move %d times.\n",Account_frequency(num));
        for(i=1;i<=40;i++)
        {printf("*");
        Sleep(30);}
        printf("\n");
        printf("You can have a try\nthe detail process is as follow:\n");
        Sleep(200);
        detail_process(num,'A','B','C');
        
        system("pause");
        return 0;
    }
    int detail_process(long long m,char start,char help,char end)
    {
    if(m==1)
    arrow(m,start,end);
    else
    {
        detail_process(m-1,start,end,help);
        arrow(m,start,end);
        detail_process(m-1,help,start,end);
    }
    
    }
    int Account_frequency(int n)
    {
        if(n==1)
        return 1;
        else
        {
            return 2*Account_frequency(n-1)+1;
        }
    }
    void arrow(int num,char a,char b)
    {
        Sleep(200);
        
        printf("number %d :\n",num);

        printf("%c-->%c\n",a,b);
    }
    void chart(int number)
    {
        printf("                      _                        _                        _\n");
        for(int j=0;j<=6;j++)
        {
            printf("                     | |                      | |                      | |\n");
        }
        printf("                   |_| |_|                    | |                      | |\n");
        printf("                  |__| |__|                   | |                      | |\n");
        printf("                 |___| |___|                  | |                      | |\n"); 
        printf("                |____| |____|                 | |                      | |\n");
        printf("               |_____________|          |_____________|          |_____________|\n");
    }                           