#include "sss.h"

/* 把S置为空栈 */
Status ClearStack(SqStack *S)
{ 
    S->top=-1;
    return OK;
}