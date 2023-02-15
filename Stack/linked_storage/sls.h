#include "stdio.h"    
#include "stdlib.h"   
#include "math.h"  
#include "time.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 20

typedef int Status; 
typedef int SElemType;

typedef struct StackNode
{
    SElemType data;
    struct StackNode *next;
}StackNode, *LinkStackPtr;

typedef struct LinkStack
{
    LinkStackPtr top;
    int count;
}LinkStack;

Status InitStack(LinkStack *S);
Status Push(LinkStack *S,SElemType e);
Status visit(SElemType c);
Status StackTraverse(LinkStack S);
Status StackEmpty(LinkStack S);
Status Pop(LinkStack *S,SElemType *e);