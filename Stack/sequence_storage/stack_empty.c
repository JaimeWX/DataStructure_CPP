#include "sss.h"

/* 若栈S为空栈，则返回TRUE，否则返回FALSE */
Status StackEmpty(SqStack S)
{ 
    if (S.top==-1)
        return TRUE;
    else
        return FALSE;   
}
