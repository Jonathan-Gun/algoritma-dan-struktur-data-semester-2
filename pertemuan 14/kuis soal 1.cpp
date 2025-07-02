#include <iostream>
using namespace std;

// Fungsi Binary Search
int binarySearch(int data[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (data[mid] == target) {
            return mid; // Data ditemukan, kembalikan index
        } else if (data[mid] < target) {
            left = mid + 1; // Cari di kanan
        } else {
            right = mid - 1; // Cari di kiri
        }
    }

    return -1; // Data tidak ditemukan
}

int main() {
    int data[] = {11, 22, 33, 44, 55, 66, 77};
    int size = sizeof(data) / sizeof(data[0]);
    int cari;

    cout << "Masukkan angka yang dicari: ";
    cin >> cari;

    int hasil = binarySearch(data, size, cari);

    if (hasil != -1) {
        cout << "Data ditemukan pada index ke-" << hasil << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }

    return 0;
}
