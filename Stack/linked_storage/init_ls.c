#include "sls.h"

/*  构造一个空栈S */
Status InitStack(LinkStack *S)
{ 
        S->top = (LinkStackPtr)malloc(sizeof(StackNode));
        if(!S->top)
            return ERROR;
        S->top=NULL;
        S->count=0;
        return OK;
}