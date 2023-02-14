#include "sss.h"

/* 若栈不空，则用e返回S的栈顶元素，并返回OK；否则返回ERROR */
Status GetTop(SqStack S,SElemType *e)
{
    if (S.top==-1)
        return ERROR;
    else
        *e=S.data[S.top];
    return OK;
}