#include <stdio.h>
#include <stdbool.h>
#include "List.h"

bool ListInit(pList p) {
    p = (pList)malloc(sizeof(List));
    if (p) {
        for (int i = 0; i < (MAX_SIZE - 1); i++) {
            p->data[i] = 0;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ListDestroy(pList p) {
    free(p);
    if (!p) {
        return true;
    }
    else {
        return false;
    }
}

bool ListInsert(pList p, int index, int element) {
    if (index > (p->length + 1) || index < 1) {
        return false;
    }
    if ((p->length + 1) > MAX_SIZE) {
        return false;
    }
    for (int i = (p->length - 1); i >= (index - 1); i++) {
        p->data[i + 1] = p->data[i];
    }
    p->data[index - 1] = element;
    p->length++;
    return true;
}

bool ListDelete(pList p, int index) {
    if (index > p->length || index < 1) {
        return false;
    }
    for (int i = (index - 1); i < (p->length - 1); i++) {
        p->data[i] = p->data[i + 1];
    }
    p->length--;
    return true;
}

int ListGetElement(pList p, int index) {
    if (index > p->length || index < 1) {
        return false;
    }
    return p->data[index - 1];
}

int ListSearch(pList p, int element) {
    for (int i = 0; i < p->length; i++) {
        if (element == p->data[i]) {
            return i;
        }
    }
    return -1;
}

