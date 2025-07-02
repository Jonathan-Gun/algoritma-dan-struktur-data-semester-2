#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int hashtable[SIZE];

    // Inisialisasi semua elemen dengan -1 (menandakan kosong)
    for (int i = 0; i < SIZE; i++) {
        hashtable[i] = -1;
    }

    // Data yang akan dimasukkan
    int data[] = {12, 23, 34, 45};
    int n = sizeof(data) / sizeof(data[0]);

    // Proses memasukkan ke dalam hashtable
    for (int i = 0; i < n; i++) {
        int index = data[i] % SIZE;
        if (hashtable[index] == -1) {
            hashtable[index] = data[i];
        } else {
            cout << "Collision terjadi saat memasukkan " << data[i]
                 << " pada index " << index << ". Data tidak dimasukkan.\n";
        }
    }

    // Menampilkan isi hashtable
    cout << "\nIsi Hashtable:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Index " << i << ": ";
        if (hashtable[i] != -1)
            cout << hashtable[i];
        else
            cout << "(kosong)";
        cout << endl;
    }

    return 0;
}
