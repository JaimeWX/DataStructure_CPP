#include "sss.h"

/*  构造一个空栈S */
Status InitStack(SqStack *S)
{ 
    /* S.data=(SElemType *)malloc(MAXSIZE*sizeof(SElemType)); */
    S->top=-1;
    return OK;
}