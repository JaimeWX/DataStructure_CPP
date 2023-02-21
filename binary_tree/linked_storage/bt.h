#include "string.h"
#include "stdio.h"    
#include "stdlib.h"   
#include "math.h"  
#include "time.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define CHARSIZE 24
#define OVERFLOW 3
#define ClearBiTree DestroyBiTree

#define MAXSIZE 100 /* 存储空间初始分配量 */

typedef int Status;		/* Status是函数的类型,其值是函数结果状态代码，如OK等 */
typedef char TElemType;
typedef char String[CHARSIZE];

typedef struct BiTNode
{
    TElemType data;
    struct BiTNode *lchild, *rchild;
}BiTNode, *BiTree;

Status InitBiTree(BiTree *T);

extern String str_sss;

Status StrAssign(String T,char *chars);
void CreateBiTree(BiTree *T);

void PreOrderTraverse(BiTree T);
void InOrderTraverse(BiTree T);
void PostOrderTraverse(BiTree T);

Status BiTreeEmpty(BiTree T);
int BiTreeDepth(BiTree T);

typedef char TElemType;
TElemType Root(BiTree T);
TElemType Nil; /* 字符型以空格符为空 */

