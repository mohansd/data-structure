#define MAX_SIZE 50

// 静态栈
typedef struct SStack {
    int data[MAX_SIZE];
    int bottom, top, length;
}SStack, *pSStack;

// 动态栈
typedef struct DStack {
    pSNode bottom, top;
    int length;
}DStack, *pDStack;

typedef struct SNode {
    int data;
    pSNode prior;
}SNode, *pSNode;