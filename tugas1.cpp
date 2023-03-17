//NIM   : A11.2022.14802
//NAMA  : NURUL BAROROH
//KELP  : 4211
//TUGAS 1 PRAKTEK


#include <iostream>

using namespace std;


int tambah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int jumlahArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

float rataArray(int arr[], int n) {
    int sum = jumlahArray(arr, n);
    float rata = (float) sum / n;
    return rata;
}
//
int main() {
    int x, y;
    cout << "Fungsi Penjumlahan 2 Bilangan "<<endl;
    cout << "Masukkan bilangan pertama: ";
    cin >> x;
    cout << "Masukkan bilangan kedua: ";
    cin >> y;
    int hasilTambah = tambah(x, y);
    cout << "Hasil penjumlahan: " << hasilTambah << endl;

    cout << "\nFungsi Pengurangan 2 Bilangan"<<endl;
    cout << "Masukkan bilangan pertama: ";
    cin >> x;
    cout << "Masukkan bilangan kedua: ";
    cin >> y;
    int hasilKurang = kurang(x, y);
    cout << "Hasil pengurangan: " << hasilKurang << endl;
//
    int n;
    cout << "\nFungsi Array"<<endl;
    cout << "Masukkan jumlah elemen pada array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    int hasilJumlahArray = jumlahArray(arr, n);
    float hasilRataArray = rataArray(arr, n);

    cout << "Hasil penjumlahan array: " << hasilJumlahArray << endl;
    cout << "Hasil rata-rata array: " << hasilRataArray << endl;

    return 0;
}
