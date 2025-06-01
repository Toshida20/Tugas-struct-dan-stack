#include <iostream>
#include <conio.h>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    string alamat;
    float ipk;
};

int main() {
    Mahasiswa jani;

    jani.nim = "c030324062";
    jani.nama = "Ahmad Tijani";
    jani.alamat = "Pal 8 Manarap";
    jani.ipk = 3.9;

    cout << jani.nim << "\n";
    cout << jani.nama << "\n";
    cout << jani.alamat << "\n";
    cout << jani.ipk << "\n";

    return 0;
}
