#include <iostream>
#include <string>
using namespace std;

struct barang {
    string nama;
    int harga;
};

// Fungsi pencarian
int search(const barang daftar[], string brg) {
    for (int i = 0; i < 5; i++) {
        if (daftar[i].nama == brg) {
            return i;
        }
    }   
    return -1;
}

int main()
{
    string brg;
    char ulang;

    // Inisialisasi daftar barang
    barang daftarbarang[5] = {
        {"Buku", 5000},
        {"Pensil", 3000},
        {"Pulpen", 2000},
        {"Penghapus", 1500},
        {"Penggaris", 4000}
    };

    do {
        cout << "Masukkan nama barang yang dicari: ";
        getline(cin, brg);

        int index = search(daftarbarang, brg);

        if (index != -1) {
            cout << "Barang ditemukan: " << daftarbarang[index].nama 
                 << " - Harga: Rp" << daftarbarang[index].harga << endl;
        } else {
            cout << "Barang tidak ditemukan.\n";
        }

        cout << "Cari lagi? (y/n): ";
        cin >> ulang;
        cin.ignore(); // untuk membersihkan newline dari buffer

    } while (ulang == 'y' || ulang == 'Y');

    cout << "\nTerima kasih!\n";
}
