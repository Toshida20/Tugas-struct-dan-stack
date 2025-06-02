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

void bersih() {
    system("cls");
}

void input(Mahasiswa *kelas) {
    bersih();
    cout << "===== MASUKAN DATA MAHASISWA =====\n" << endl;

    cout << "Masukkan NIM\t: ";
    cin >> kelas->nim;
    cin.ignore();

    cout << "Masukkan Nama\t: ";
    getline(cin, kelas->nama);

    cout << "Masukkan Alamat\t: ";
    getline(cin, kelas->alamat);

    cout << "Masukkan IPK\t: ";
    cin >> kelas->ipk;

    cout << "\nTekan [E] untuk melanjutkan...";
        while (getch() != 'e');
        return;
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
