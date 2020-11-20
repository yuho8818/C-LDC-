//12.7 将两个有序整数链表合并成一个有序整数链表，merge函数用以合并两链表返回合并后链表头节点指针
//2020.11.17          20206696李正文
//从12.9开始严格按照书上定义函数(包括命名等)，若前三个中有看不懂的可以在12.9及以后寻找
#include<stdio.h>
#include<stdlib.h> 
typedef struct ListNode
{
	int data;
	struct ListNode* pnext;
}LN;

int merge(LN*,LN*);
void createlist();
void putin(LN*, int, int);
void printlist(LN*);

LN* a1 = NULL;
LN* a2 = NULL;

int main()
{
	createlist();
	putin(a1, 1, 5);
	putin(a2, 2, 6);
	printf("a1是:\n");
	printlist(a1);
	printf("a2是:\n");
	printlist(a2);
	printf("结合后并排序的链表是:\n");
	printlist(merge(a1,a2));
	return 0;
}
//将数据传进链表
void putin(LN* p, int a, int b)
{
	LN* ptemp = p;   
	LN* pnew = NULL;
	for (int i = a; i <= b; i+=2)
	{
		pnew = (LN*)malloc(sizeof(LN));
		pnew->data = i;
		pnew -> pnext = NULL;
		ptemp->pnext = pnew;      //尽量不要往头节点写入数据，从第二个节点开始。从头节点开始的话头节点所包含数据后面插入或删除会很麻烦
		ptemp = ptemp->pnext;
	}
}
//创建链表头
void createlist()
{
	a1 = (LN*)malloc(sizeof(LN));
	a2 = (LN*)malloc(sizeof(LN));
	a1->pnext = NULL;
	a2->pnext = NULL;
}
//连接两链表并排序
//可以插入排序，也可以先合并再排序，方法见仁见智，这里选择后者(插入见12.8）
int merge(LN*a,LN*b)
{
	LN* ptemp1 = a->pnext;
	LN* p = NULL;
	LN* q = NULL;
	LN* small = NULL;
	int temp;
	while (ptemp1->pnext != NULL)ptemp1 = ptemp1->pnext;
	ptemp1->pnext = b->pnext;
	for(p = a->pnext; p->pnext != NULL; p = p->pnext)
    {
        small = p;
        for(q = p->pnext; q; q = q->pnext)
        {
            if(q->data < small->data)
            {
                small = q;
            }
        }
        if(small != p)
        {
            temp = p->data;
            p->data = small->data;
            small->data = temp;
        }
	}
	return a;
}

//输出链表
void printlist(LN*a)
{
	LN* ptemp = a->pnext;
	while (ptemp != NULL)
	{
		printf("%d ", ptemp->data);
		ptemp = ptemp->pnext;
	}
	printf("*\n");
}

