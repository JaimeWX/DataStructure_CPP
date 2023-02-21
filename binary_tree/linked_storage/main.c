#include "bt.h"

main()
{
    BiTree T;
    printf("初始化结果：%d\n",InitBiTree(&T));

    StrAssign(str_sss,"ABDH#K###E##CFI###G#J##");
    printf(str_sss);
	CreateBiTree(&T);

    PreOrderTraverse(T);
    printf("\n");

    InOrderTraverse(T);
    printf("\n");

    PostOrderTraverse(T);
    printf("\n");

    printf("构造空二叉树后,树空否？%d(1:是 0:否) 树的深度=%d\n",BiTreeEmpty(T),BiTreeDepth(T));

    TElemType e1;
    e1=Root(T);
	printf("二叉树的根为: %c",e1);

    int i;
    ClearBiTree(&T);
	printf("\n清除二叉树后,树空否？%d(1:是 0:否) 树的深度=%d\n",BiTreeEmpty(T),BiTreeDepth(T));
	i=Root(T);
	if(!i)
		printf("树空，无根\n");

}