#include "sls.h"

Status StackTraverse(LinkStack S)
{
    LinkStackPtr p;
    p=S.top;
    while(p)
    {
        visit(p->data);
        p=p->next;
    }
    printf("\n");
    return OK;
}

Status visit(SElemType c)
{
    printf("%d ",c);
    return OK;
}