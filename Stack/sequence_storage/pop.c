#include "sss.h"

/* 若栈不空，则删除S的栈顶元素，用e返回其值，并返回OK；否则返回ERROR */
Status Pop(SqStack *S,SElemType *e)
{ 
        if(S->top==-1)
            return ERROR;
        *e=S->data[S->top];	/* 将要删除的栈顶元素赋值给e */
        S->top--;				/* 栈顶指针减一 */
        return OK;
}