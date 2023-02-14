#include "stdio.h"    
#include "stdlib.h"  
#include "math.h"  
#include "time.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 20 /* 存储空间初始分配量 */

typedef int Status;
typedef int SElemType;

typedef struct 
{
    SElemType data[MAXSIZE];
    int top;
}SqStack;

Status InitStack(SqStack *S);
Status Push(SqStack *S,SElemType e);
Status Pop(SqStack *S,SElemType *e);
Status visit(SElemType c);
Status StackTraverse(SqStack S);
Status StackEmpty(SqStack S);
Status GetTop(SqStack S,SElemType *e);
int StackLength(SqStack S);
Status ClearStack(SqStack *S);