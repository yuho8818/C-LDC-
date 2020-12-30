//12.9 创造一个链表，然后将其元素颠倒过来
//2020.11.20          20206696李正文
#include<stdio.h>
#include<stdlib.h>

struct ListNode
{
    char data;
    struct ListNode* nextPtr;
};

typedef struct ListNode ListNode;
typedef ListNode* ListNodePtr;

ListNodePtr reverseList(ListNodePtr);
void insert(ListNodePtr*, char);
void printList(ListNodePtr);
void push(ListNodePtr*, char);

int main()
{
    ListNodePtr listPtr = NULL;
    char i;
    for (i = 'a'; i <= 'f'; i++)
    {
        insert(&listPtr, i);
    }
    printf("原链表为：\n");
    printList(listPtr);
    printf("翻转后链表为：\n");
    printList(reverseList(listPtr));
    return 0;
}

ListNodePtr reverseList(ListNodePtr currentPtr)
{
    ListNodePtr ptemp = NULL;
    while (currentPtr != NULL)
    {
        push(&ptemp, currentPtr->data);
        currentPtr = currentPtr->nextPtr;
    }
    return ptemp;
}

void insert(ListNodePtr* sPtr, char value)
{
    ListNodePtr newPtr;
    ListNodePtr previousPtr;
    ListNodePtr currentPtr;

    newPtr = malloc(sizeof(ListNode));

    if (newPtr)
    {
        newPtr->data = value;
        newPtr->nextPtr = NULL;

        previousPtr = NULL;
        currentPtr = *sPtr;

        while (currentPtr != NULL && value > currentPtr->data)
        {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }

        if (previousPtr == NULL)
        {
            newPtr->nextPtr = *sPtr;
            *sPtr = newPtr;
        }
        else
        {
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        }
    }
    else
    {
        printf("%c not inserted. No memory available.\n", value);
    }
}

void push(ListNodePtr* topPtr, char info)
{
    ListNodePtr newPtr;

    newPtr = malloc(sizeof(ListNode));

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

void printList(ListNodePtr currentPtr)
{
    if (!currentPtr)
    {
        printf("List is empty.\n");
    }
    else
    {
        while (currentPtr)
        {
            printf("%c ", currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        }
        printf("*\n");
    }
}
