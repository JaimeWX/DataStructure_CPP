#include "sls.h"

/* 若栈不空，则用e返回S的栈顶元素，并返回OK；否则返回ERROR */
Status GetTop(LinkStack S,SElemType *e)
{
    if (S.top==NULL)
        return ERROR;
    else
        *e=S.top->data;
    return OK;
}