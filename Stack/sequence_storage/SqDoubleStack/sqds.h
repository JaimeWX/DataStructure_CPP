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
typedef int SElemType; /* SElemType类型根据实际情况而定，这里假设为int */

/* 两栈共享空间结构 */
typedef struct 
{
    SElemType data[MAXSIZE];
    int top1;	/* 栈1栈顶指针 */
    int top2;	/* 栈2栈顶指针 */
}SqDoubleStack;

Status InitStack(SqDoubleStack *S);
Status Push(SqDoubleStack *S,SElemType e,int stackNumber);
Status visit(SElemType c);
Status StackTraverse(SqDoubleStack S);
int StackLength(SqDoubleStack S);
Status StackEmpty(SqDoubleStack S);
Status ClearStack(SqDoubleStack *S);