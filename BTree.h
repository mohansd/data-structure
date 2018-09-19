// 二叉树数据结构
typedef struct BTree{
    pBTNode root;
    int high, leaves;
};

typedef struct BTNode{
    int data;
    pBTNode lchild, rchild;
}BTNode, *pBTNode;

