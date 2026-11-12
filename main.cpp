#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, sekolah;
    char ulang;

    do {
        cout << "=== INPUT DATA SISWA ===" << endl;

        cout << "Masukkan nama: ";
        getline(cin, nama);

        cout << "Masukkan sekolah: ";
        getline(cin, sekolah);

        cout << "\n=== HASIL INPUT ===" << endl;
        cout << "Nama: " << nama << endl;
        cout << "Sekolah: " << sekolah << endl;

        cout << "\nInput lagi? (y/n): ";
        cin >> ulang;
        cin.ignore(10000, '\n');

    } while (ulang == 'y' || ulang == 'Y');

    cout << "Program selesai!" << endl;

    return 0;
}
