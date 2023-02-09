#define MAXSIZE 20
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int ElemType;
typedef int Status;

typedef struct 
{
    ElemType data[MAXSIZE];
    int length; // 线性表的当前长度
}SqList;

Status GetElem(SqList L, int i, ElemType *e);
Status ListInsert(SqList *L, int i, ElemType e);
Status ListDelete(SqList *L, int i, ElemType *e);
void print_data(SqList L);