#include <stdio.h>
#include <stdbool.h>
#include "Stack.h"

bool StackInit(pSStack stack) {
    stack = (pSStack)malloc(sizeof(SStack));
    if (stack) {
        for (int i = 0; i < MAX_SIZE; i++) {
            stack->data[i] = 0;
        }
        stack->bottom = 0;
        stack->top = 0;
        stack->length = 0;
        return true;
    }
    else {
        return false;
    }
}

bool StackDestroy(pSStack stack) {
    if (stack && stack->length == 0) {
        free(stack);
        return true;
    }
    else {
        return false;
    }
}

bool StackPush(pSStack stack, int element) {
    if (stack->length < MAX_SIZE) {
        stack->top++;
        stack->data[stack->top] = element;
        return true;
    }
    else {
        return false;
    }
}