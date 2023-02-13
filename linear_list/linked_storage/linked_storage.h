#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <ctype.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 20

typedef int ElemType;
typedef int Status;

typedef struct Node
{
    ElemType data;
    struct  Node *next;
}Node;
typedef struct Node *LinkList;

Status InitList(LinkList *L);
int ListLength(LinkList L);

Status visit(ElemType c);
Status ListTraverse(LinkList L);
Status ListInsert(LinkList *L,int i,ElemType e);

Status ListEmpty(LinkList L);
Status ClearList(LinkList *L);

Status GetElem(LinkList L, int i, ElemType *e);
int LocateElem(LinkList L,ElemType e);

void CreateListHead(LinkList *L, int n);
void CreateListTail(LinkList *L, int n);




