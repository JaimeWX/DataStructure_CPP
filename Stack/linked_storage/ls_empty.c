#include "sls.h"

/* 若栈S为空栈，则返回TRUE，否则返回FALSE */
Status StackEmpty(LinkStack S)
{ 
    if (S.count==0)
            return TRUE;
    else
            return FALSE;
}