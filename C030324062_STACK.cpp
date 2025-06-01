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

int Empty(stack *S){
    return (S->count == 0);
}

void Pop(stack *S, stok *x){
    if (Empty(S))
        cout << "Stack kosong!" << endl;
    else{
        --(S->count);
        *x = S->Buah[S->count];
        
    }
}

void Push(stok x, stack *S){
    if (Full(S))
        cout << "Stack full! Gagal mengirim data" << endl;
    else{
        S->Buah[S->count] = x;
        ++(S->count);
    }
}