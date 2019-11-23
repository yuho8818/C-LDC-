/*
---In order to output Chinese in the console normally, the code of this program is GB2312---
---If it does not display correctly in the editor, please change the code to GB2312---
---为了正常的在控制台中输出中文，本程序的编码为GB2312---
---如果在编辑器中显示不正确，请将编码码改为GB2312---

This program was written by Haoyu Zhang
Produced date 11/23/2019, Northeastern University,China

5.27（修改的掷骰子游戏）
修改最基本的Craps双骰子游戏，加入赌注机制，初始拥有1000美元，每轮的赌注由玩家自行输入，
在每轮结束后适当的打印一些提示语来增加游戏的趣味性

在原题目基础上做了少量修改，加入了一个小菜单，使用户在一开始可以选择玩普通版的或者赌注版的craps游戏
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int zhuangtai = 0;//zhuangtai全局变量保存每轮的输赢状态，用0或1表示，它的值由craps1函数修改
enum Status
{
    CONTINUE,
    WON,
    LOST
};
enum Status gamestatus;
//check函数通过传入的状态，盈亏值，剩余值来适当地打印一些提示语
void check(int stat, int money, int bank)
{
    if (stat == 1)
    {
        if (money >= 200 && money < 500)
        {
            puts("运气不错，赚了一笔哦！");
        }
        if (money >= 500)
        {
            puts("wow~，大赚一笔啊！");
        }
    }
    else
    {
        if (bank <= 200)
        {
            puts("哦，你快要破产了，唔？");
        }
        if (money >= 200 && money < 500)
        {
            puts("不要灰心，还有机会！");
        }
        if (money >= 500)
        {
            puts("不要气馁，胜败乃兵家常事！");
        }
    }
}

int rollDice() //这个负责掷骰子，并把结果显示出来
{
    int die1 = 1 + rand() % 6;
    int die2 = 1 + rand() % 6;
    Sleep(300); //来点停顿效果，增加刺激感，增强游戏体验！
    printf("骰子掷出的结果为：%d + %d = %d\n", die1, die2, die1 + die2);
    return die1 + die2;
}
void craps1()//基本的掷骰子函数
{
    int mypoint;
    int sum = rollDice();
    switch (sum)
    {
    case 7:
    case 11:
        gamestatus = WON; //掷出7或11直接判赢
        break;
    case 2:
    case 3:
    case 12:
        gamestatus = LOST; //掷出2或3或12直接判输
        break;
    default: //其他情况
        gamestatus = CONTINUE;
        mypoint = sum;                  //把掷出的点数作为目标
        printf("点数为 %d\n", mypoint); //显示掷出的点数
        break;
    }
    while (gamestatus == CONTINUE)
    {
        sum = rollDice();   //继续投掷骰子
        if (sum == mypoint) //点数和为mypoint判赢
        {
            gamestatus = WON;
        }
        else if (sum == 7)
            gamestatus = LOST; //掷出7就判输
    }
    if (gamestatus == WON)
    {
        puts("\n恭喜！你赢了！！");
        zhuangtai = 1;
    }
    else
    {
        puts("\n很不幸，你输了！");
        zhuangtai = 0;
    }
}
void craps2()//这个是加了赌注机制的craps游戏
{
    int wager;
    int bank = 1000;
    puts("你的钱包里面现在有$1000哦，下个赌注吧！暂且只支持整数哦（输入的小数会被忽略哦）");
    while (1)
    {
        scanf("%d", &wager);
        fflush(stdin);
        if (wager <= 0)
            puts("赌注应当大于等于0！请重新输入");
        else if (wager > bank)
            puts("emm……你没有这么多钱啊，请重新输入！");
        else
        {
            craps1();
            if (zhuangtai == 1)
            {
                bank = bank + wager;
                check(1, wager, bank);
                printf("现在你的钱包里面有$%d了！", bank);
                printf("\n再试一次，下注吧：");
            }
            else if (zhuangtai == 0)
            {
                bank = bank - wager;
                if (bank <= 0)
                {
                    puts("对不起，你已经破产了……");
                    break;
                }
                else
                {
                    check(0, wager, bank);
                    printf("现在你的钱包里面还有$%d！", bank);
                    printf("\n再试一次，下注吧：");
                }
            }
        }
    }
}

int main()
{
    char set;
    srand(time(NULL));
    puts("欢迎进入Craps游戏！");
    puts("如果你想玩普通的Craps游戏，请输入1");
    puts("如果你想玩可下赌注的的Craps游戏，请输入2");

    while (1) //输入合法判断和跳转
    {
        scanf("%c", &set);
        fflush(stdin); //清除输入流，避免回车产生一些不可预料的后果
        if (set == '1')
        {
            puts("游戏开始!");
            craps1();
            break;
        }
        else if (set == '2')
        {
            puts("游戏开始!");
            craps2();
            break;
        }
        else
        {
            puts("你输入的既不是1也不是2哦，请再输一次！");
        }
    }
    system("pause");
    return 0;
}