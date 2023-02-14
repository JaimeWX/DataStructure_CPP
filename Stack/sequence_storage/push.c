#include "sss.h"

/* 插入元素e为新的栈顶元素 */
Status Push(SqStack *S,SElemType e)
{
        if(S->top == MAXSIZE -1) /* 栈满 */
        {
            return ERROR;
        }
        S->top++;				/* 栈顶指针增加一 */
        S->data[S->top]=e;  /* 将新插入元素赋值给栈顶空间 */
        return OK;
}