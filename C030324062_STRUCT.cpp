#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

//C030324062_STRUCT

struct Mahasiswa {
    string nim;
    string nama;
    string alamat;
    float ipk;
};

void input(string nim, string nama, string alamat, float ipk) {
    cout << "Masukkan NIM: ";
    cin >> nim;
    cout << "Masukkan Nama: ";
    cin.ignore(); getline(cin, nama);
    cout << "Masukkan Alamat: ";
    getline(cin, alamat);
    cout << "Masukkan IPK: ";
    cin >> ipk;
    cout << "\nTekan enter untuk melanjutkan..."; getch();
}


int main() {
    Mahasiswa jani;
    string nim = jani.nim;
    string nama = jani.nama;
    string alamat = jani.alamat;
    float ipk = jani.ipk;

    input(nim,nama,alamat,ipk);
    return 0;
}
