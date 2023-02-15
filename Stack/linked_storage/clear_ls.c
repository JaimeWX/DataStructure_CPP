#include "sls.h"

/* 把S置为空栈 */
Status ClearStack(LinkStack *S)
{ 
    LinkStackPtr p,q;
    p=S->top;
    while(p)
    {  
        q = p;
        p = p->next;
        free(q);
    } 
    S->count=0;
    return OK;
}