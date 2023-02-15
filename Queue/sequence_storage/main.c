#include "qss.h"

main()
{
    Status j;
    int i =0;
    int l;
    QElemType d;
    SqQueue Q;

    InitQueue(&Q);
	printf("初始化队列后，队列空否？%u(1:空 0:否)\n",QueueEmpty(Q));

	printf("请输入整型队列元素(不超过%d个),-1为提前结束符: ",MAXSIZE-1);
	do
	{
		/* scanf("%d",&d); */
		d=i+100;
		if(d==-1)
			break;
		i++;
		EnQueue(&Q,d);
	}while(i<MAXSIZE-1);
	printf("现在队列中的元素为: \n");
	QueueTraverse(Q);

	printf("队列长度为: %d\n",QueueLength(Q));
	printf("现在队列空否？%u(1:空 0:否)\n",QueueEmpty(Q));

    // DeQueue(&Q,&d);
	// printf("现在队列中的元素为: \n");
	// QueueTraverse(Q);

	printf("连续%d次由队头删除元素,队尾插入元素:\n",MAXSIZE);
	for(l=1;l<=MAXSIZE;l++)
	{
		DeQueue(&Q,&d);
		printf("删除的元素是%d,插入的元素:%d \n",d,l+1000);
		/* scanf("%d",&d); */
		d=l+1000;
		EnQueue(&Q,d);
	}
	printf("现在队列中的元素为: \n");
	QueueTraverse(Q);
	printf("队列长度为: %d\n",QueueLength(Q));

	j=GetHead(Q,&d);
	if(j)
		printf("现在队头元素为: %d\n",d);

	ClearQueue(&Q);
	printf("清空队列后, 队列空否？%u(1:空 0:否)\n",QueueEmpty(Q));
	printf("队列长度为: %d\n",QueueLength(Q));
}