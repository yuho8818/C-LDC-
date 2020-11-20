//12.10 将一个句子中的单词颠倒过来
//2020.11.20          20206696李正文

#include<stdio.h>
#include<stdlib.h>

struct stackNode
{
    char data;
    struct stackNode *nextPtr;
};

typedef struct stackNode StackNode;
typedef StackNode *StackNodePtr;

void push(StackNodePtr *, char);
char pop(StackNodePtr *);
int isEmpty(StackNodePtr);

int main()
{
    StackNodePtr stackPtr = NULL;
    char i;

    printf("请输入一个句子：\n");
    while((i=getchar())!='\n')
    {
        push(&stackPtr, i);
    }
    
    printf("该句子颠倒后是：\n");
    while(!isEmpty(stackPtr))
    {
        printf("%c", pop(&stackPtr));
    }

    return 0;
}

void push(StackNodePtr* topPtr, char info)
{
    StackNodePtr newPtr;

    newPtr = malloc(sizeof(StackNode));

    if (newPtr)
    {
        newPtr->data = info;
        newPtr->nextPtr = *topPtr;
        *topPtr = newPtr;
    }
    else
    {
        printf("%c not inserted. No memory available.\n", info);
    }
}

char pop(StackNodePtr*topPtr)
{
    StackNodePtr tempPtr;
    int popValue;

    tempPtr = *topPtr;
    popValue=(*topPtr)->data;
    *topPtr = (*topPtr)->nextPtr;
    free(tempPtr);

    return popValue;
}

int isEmpty(StackNodePtr topPtr)
{
    return !topPtr;
}