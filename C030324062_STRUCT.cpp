#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

//C030324062_STRUCT
//git branch -M main
//git push -u origin main
//git add C030324062_STRUCT.cpp
//git commit -m "BLA BLA BLA"

struct Mahasiswa {
    string nim;
    string nama;
    string alamat;
    float ipk;
};

void bersih(){
    system("cls");
};

void input(string &nim, string &nama, string &alamat, float &ipk) {
    bersih();
    cout << "=====MASUKAN DATA MAHASISWA=====\n" << endl;
    cout << "Masukkan NIM: ";
    cin >> nim;
    cin.ignore();
    cout << "Masukkan Nama: ";
    getline(cin, nama);
    cout << "Masukkan Alamat: ";
    getline(cin, alamat);
    cout << "Masukkan IPK: ";
    cin >> ipk;
    cout << "\nTekan enter untuk melanjutkan...";
    getch();

}

void output(Mahasiswa data) {
    bersih();
    cout << "\n===== DATA MAHASISWA =====\n";
    cout << "NIM: " << data.nim << endl;
    cout << "Nama: " << data.nama << endl;
    cout << "Alamat: " << data.alamat << endl;
    cout << "IPK: " << data.ipk << endl;
}

int main() {
    Mahasiswa jani;

    string nim = jani.nim;
    string nama = jani.nama;
    string alamat = jani.alamat;
    float ipk = jani.ipk;

    input(nim, nama, alamat, ipk);

    jani.nim = nim;
    jani.nama = nama;
    jani.alamat = alamat;
    jani.ipk = ipk;

    output(jani);
    return 0;
}
