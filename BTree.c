#include <stdio.h>
#include "BTree.h"

void visit(pBTNode p) {
    printf("%d,", p->data);
    return;
}

void preOrder_0(pBTNode p) {
    visit(p);
    if (p->lchild) {
        preOrder(p->lchild);
    }
    if (p->rchild) {
        preOrder(p->rchild);
    }
    return;
}

void inOrder_0(pBTNode p) {
    if (p->lchild) {
        inOrder(p->lchild);
    }
    visit(p);
    if (p->rchild) {
        inOrder(p->rchild);
    }
    return;
}

void postOrder_0(pBTNode p) {
    if (p->lchild) {
        postOrder(p->lchild);
    }
    if (p->rchild) {
        postOrder(p->rchild);
    }
    visit(p);
    return;
}

void preOrder_1(BTree tree) {
    BTNode p = tree->root;
    SStack s;
    while(p || !IsEmpty(s)) {
        if (p) {
            visit(p)
            s.push(p);
            p = p->lchild;
        }
        else {
            s.pop(p);
            p = p->rchild;
        }
    }
}

void inOrder_1(BTree tree) {
    BTNode p = tree->root;
    SStack s ;
    while(p || !IsEmpty(s)) {
        if (p) {
            s.push(p);
            p = p->lchild;
        }
        else {
            s.pop(p);
            visit(p);
            p = p->rchild;
        }
    }
    return;
}
// 之前访问的节点是在栈顶节点的左子树还是右子树
void postOrder_1(BTree tree) {
    BTNode p = tree->boot;
    SStack s;
    while(p || !IsEmpty(s)) {
        if 
    }
}