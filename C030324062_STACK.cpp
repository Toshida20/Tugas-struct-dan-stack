#include <iostream>
using namespace std;
//C030324062_STACK

const int MAXSTACK = 15;
typedef int stok;

typedef struct{
    stok Buah[MAXSTACK];
    int count;
} stack;

void initializeStack(stack *S){
    S->count = 0;
}

int Full(stack *S){
    return (S->count == MAXSTACK);
}