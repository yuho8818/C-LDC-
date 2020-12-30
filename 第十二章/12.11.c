//12.11 回文检测器
//2020.11.20          20206696李正文

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

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
    char c;
    char line[101];
    char lettersonly[101];//去掉标点和空格只留下字母
    int i = 0, j = 0;
    int palindrome = 1;//(palindrome  n.回文)

    printf("请输入一段文本：\n");
    while((c=getchar())!='\n')
    {
        line[j++] = c;

        if(isalpha(c))
        {
            lettersonly[i++] = tolower(c);
            push(&stackPtr, tolower(c));
        }
    }

    line[j] = '\0';

    for (j = 0; j < i;j++)
    {
        if(lettersonly[j]!=pop(&stackPtr))
        {
            palindrome = 0;
            break;
        }
    }

    if(palindrome)
    {
        printf("%s 是回文\n",line);
    }
    else
    {
        printf("%s 不是回文\n", line);
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