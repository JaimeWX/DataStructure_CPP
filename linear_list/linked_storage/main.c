#include "linked_storage.h"

main()
{
    LinkList L;
    ElemType e;
    Status i;
    int j,k;

    i=InitList(&L);
    printf("初始化L后：ListLength(L)=%d\n",ListLength(L));

    for(j=1;j<=5;j++)
        i=ListInsert(&L,1,j);
    printf("在L的表头依次插入1~5后：L.data=");
    ListTraverse(L); 
    printf("在L的表头依次插入1~5后：ListLength(L)=%d\n",ListLength(L));
    
    int idx = 2;
    int data = 36;
    i = ListInsert(&L,idx,data);
    ListTraverse(L); 
    printf("在L的idx插入data：ListLength(L)=%d\n",ListLength(L));

    i=ListEmpty(L);
    printf("L是否空：i=%d(1:是 0:否)\n",i);

    GetElem(L,5,&e);
    printf("第5个元素的值为：%d\n",e);

    int link_idx;
    link_idx = LocateElem(L,36);
    printf("%d的位置是%d\n",36,link_idx);

    i=ClearList(&L);
    printf("\n清空L后：ListLength(L)=%d\n",ListLength(L));

    CreateListHead(&L,20);
    printf("整体创建L的元素(头插法)：");
    ListTraverse(L); 

    i=ClearList(&L);
    printf("\n删除L后：ListLength(L)=%d\n",ListLength(L));

    CreateListTail(&L,20);
    printf("整体创建L的元素(尾插法)：");
    ListTraverse(L); 

}