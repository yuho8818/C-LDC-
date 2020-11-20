//12.6 编写一个程序来拼接两个链表...
//2020.11.17          20206696李正文
//从12.9开始严格按照书上定义函数(包括命名等)，若前三个中有看不懂的可以在12.9及以后寻找
#include<stdio.h>
#include<stdlib.h> 
typedef struct ListNode
{
	int data;
	struct ListNode* pnext;
}LN;

void concatenate(LN*,LN*);
void createlist();
void putin(LN*, int, int);
void printlist(LN*);

LN* a1 = NULL;
LN* a2 = NULL;

int main()
{
	createlist();
	putin(a1, 1, 3);
	putin(a2, 4, 6);
	printf("a1是:\n");
	printlist(a1);
	printf("a2是:\n");
	printlist(a2);
	concatenate(a1, a2);
	printf("结合后的链表是:\n");
	printlist(a1);
	return 0;
}
//将数据传进链表
void putin(LN* p, int a, int b)
{
	LN* ptemp = p;   
	LN* pnew = NULL;
	for (int i = a; i <= b; i++)
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
//连接两链表
void concatenate(LN*a,LN*b)
{
	LN* ptemp = a->pnext;
	while (ptemp->pnext != NULL)ptemp = ptemp->pnext;
	ptemp->pnext = b->pnext;
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

