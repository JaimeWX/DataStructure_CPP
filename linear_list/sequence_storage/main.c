#include <stdio.h>
#include "sequence_storage.h"

SqList sqlist = {{8,3,6,3,5,56,79},7};

void print_data(SqList L)
{
    int *p;
    for (p = L.data; p < (L.data + L.length); p++)
        printf("%d\t",*p);
    printf("\n");
}

main()
{   
    // GetElem.c
    ElemType e;
    printf("%d\n",GetElem(sqlist,4,&e));
    printf("%d\n",e);


    // ListInsert.c
    print_data(sqlist);
    int insert_index = 4;
    ElemType insert_e = 36;
    SqList *L;
    L = &sqlist;
    printf("%d\n",ListInsert(L, insert_index, insert_e));
    print_data(sqlist);


   // ListDelete.c
   print_data(sqlist);
   SqList *LL;
   LL = &sqlist;
   int delete_index = 2;
   ElemType delete_elem;
   printf("%d\n",ListDelete(LL, delete_index, &delete_elem));
   print_data(sqlist);
   printf("%d\n",delete_elem);
}