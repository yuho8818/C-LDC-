//12.8 将25个随机整数（0-100）按顺序插入到链表中，并计算出和与浮点数类型的平均值
//2020.11.17          20206696 李正文
//从12.9开始严格按照书上定义函数(包括命名等)，若前三个中有看不懂的可以在12.9及以后寻找
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct ListNode
{
	int data;
	struct ListNode *pnext;
}LN;

LN* pln = NULL;

int sumlist(LN*);
double avglist(LN*);
void insert(LN*, int);
void printlist(LN*);
void createlist();

int main()
{
	createlist();

	srand(time(NULL)); //随机种子

	int i;
	for (i = 1; i <= 25; i++)
	{
		insert(pln, rand() % 101);
	}

	printf("该链表为:\n");
	printlist(pln);

	printf("各数和为:%d\n",sumlist(pln));
	printf("平均数为:%f\n",avglist(pln));

	return 0;
}
//创建链表头节点
void createlist()
{
	pln = (LN*)malloc(sizeof(LN));
	pln->pnext = NULL;
}
//插入链表
void insert(LN* p, int a)
{
	LN* pold = NULL;
	LN* pnew = NULL;
	LN* ptemp = p->pnext;

	pnew = (LN*)malloc(sizeof(LN));
	if (pnew != NULL)
	{
		pnew->data = a;
		pnew->pnext = NULL;

		while (ptemp != NULL && a > ptemp->data)
		{
			pold = ptemp;
			ptemp = ptemp->pnext;
		}
		if (pold == NULL)
		{
			pnew ->pnext = p->pnext;
			p->pnext = pnew;
		}
		else
		{
			pold->pnext = pnew;
			pnew->pnext = ptemp;
		}
	}
}

//输出链表
void printlist(LN* a)
{
	LN* ptemp = a->pnext;
	while (ptemp != NULL)
	{
		printf("%d ", ptemp->data);
		ptemp = ptemp->pnext;
	}
	printf("*\n");
}
//求和
int sumlist(LN* a)
{
	int k = 0;
	LN* ptemp = a->pnext;
	while (ptemp != NULL)
	{
		k += ptemp->data;
		ptemp = ptemp->pnext;
	}
	return k;
}
//求平均值
double avglist(LN* a)
{
	double k = 0.0;
	int c = 0;
	LN* ptemp = a->pnext;
	while (ptemp != NULL)
	{
		k += ptemp->data;
		c++;
		ptemp = ptemp->pnext;
	}
	return k / c;
}
