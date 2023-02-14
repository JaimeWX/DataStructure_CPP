#include "sss.h"

/* 从栈底到栈顶依次对栈中每个元素显示 */
Status StackTraverse(SqStack S)
{
    int i;
    i=0;
    while(i<=S.top)
    {
        visit(S.data[i++]);
    }
    printf("\n");
    return OK;
}

Status visit(SElemType c)
{
    printf("%d ",c);
    return OK;
}