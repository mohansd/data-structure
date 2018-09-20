#define MAX_SIZE 50
#include <stdbool.h>

// 线性表
typedef struct List{
    int data[MAX_SIZE];
    int length;
}List, *pList;

bool ListInit(pList list);
bool ListDestroy(pList list);
bool ListInsert(pList list, int index, int element);
bool ListDelete(pList list, int index);
int ListGetElement(pList list, int index);
int ListSearch(pList list, int element);

// 静态链表
typedef struct StaticLList{
    int data[MAX_SIZE][2];
    int length;
}StaticLList, *pStaticLList;

// 单向链表
typedef struct SLList{
    pSLNode head;
    int length;
}SLList, *pSLList;

typedef struct SLNode{
    int data;
    pSLNode next;
}SLNode, *pSLNode;

// 双向链表
typedef struct DLList{
    pDLNode head;
    int length;
}DLList, *pDLList;

typedef struct DLNode{
    int data;
    pDLNode pre, next;
}DLNode, *pDLNode;

