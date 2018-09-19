#define MAX_SIZE 50

// 线性表
typedef struct List{
    int data[MAX_SIZE];
    int length;
}List, *pList;

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

