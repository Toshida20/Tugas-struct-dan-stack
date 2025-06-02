#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

// C030324062_STRUCT

struct Mahasiswa {
    string nim;
    string nama;
    string alamat;
    float ipk;
};

void bersih() {
    system("cls");
}

void input(Mahasiswa *kelas) {
    bersih();
    cout << "===== MASUKAN DATA MAHASISWA =====\n" << endl;

    cout << "Masukkan NIM       : ";
    cin >> kelas->nim;
    cin.ignore();

    cout << "Masukkan Nama      : ";
    getline(cin, kelas->nama);

    cout << "Masukkan Alamat    : ";
    getline(cin, kelas->alamat);

    cout << "Masukkan IPK       : ";
    cin >> kelas->ipk;

    cout << "\nTekan enter untuk melanjutkan...";
    getch();
}

void output(Mahasiswa *data) {
    bersih();
    cout << "\n===== DATA MAHASISWA =====" << endl;
    cout << "NIM    : " << data->nim << endl;
    cout << "Nama   : " << data->nama << endl;
    cout << "Alamat : " << data->alamat << endl;
    cout << "IPK    : " << data->ipk << endl;
}

int main() {
    Mahasiswa jani;

    input(&jani);
    output(&jani);

    return 0;
}
