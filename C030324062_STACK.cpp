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
        cout << "Nilai " << *x << " Berhasil diambil" << endl;

    }
}

void Push(stok x, stack *S){
    if (Full(S))
        cout << "Stack full! Gagal mengirim data" << endl;
    else{
        S->Buah[S->count] = x;
        cout << "Nilai " << x << " Berhasil di tambahkan" << endl;
        ++(S->count);
    }
}

int main(){
    stack Toko;
    stok *B = Toko.Buah;

    initializeStack(&Toko);

    Pop(&Toko, B);
    Push(50, &Toko);
    Push(66, &Toko);
    Push(92, &Toko);
    Push(1, &Toko);
    Push(6, &Toko);
    Push(77, &Toko);
    Push(11, &Toko);
    Pop(&Toko, B);
    Push(50, &Toko);
    Push(66, &Toko);
    Push(92, &Toko);
    Push(1, &Toko);
    Push(6, &Toko);
    Push(77, &Toko);
    Push(11, &Toko);
    Pop(&Toko, B);
    Push(50, &Toko);
    Push(99, &Toko);
    Push(99, &Toko);
    Push(1, &Toko);
    Push(6, &Toko);
    Push(77, &Toko);
    Pop(&Toko, B);
    Push(98, &Toko);
}