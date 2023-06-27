#include <iostream>
using namespace std;

struct mhs{
    string nim;
    string nama;
    string jurusan;
    string lulus;
};

int main(){
     int jumlahMahasiswa;
     cout << "Masukkan jumlah mahasiswa: ";
     cin >> jumlahMahasiswa;

     mhs* mahasiswa = new mhs[jumlahMahasiswa];

     for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Data mahasiswa ke-" << i+1 << endl;
        cout << "NIM: ";
        cin >> mahasiswa[i].nim;
        cout << "Nama: ";
        cin >> mahasiswa[i].nama;
        cout << "Jurusan: ";
        cin >> mahasiswa[i].jurusan;
        cout << "Tahun Lulus: ";
        cin >> mahasiswa[i].lulus;
        cout << endl;
     }

     cout << "Data mahasiswa:" << endl;
     for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Mahasiswa ke-" << i+1 << endl;
        cout << "NIM: " << mahasiswa[i].nim << endl;
        cout << "Nama: " << mahasiswa[i].nama << endl;
        cout << "Jurusan: " << mahasiswa[i].jurusan << endl;
        cout << "Tahun Lulus: " << mahasiswa[i].lulus << endl;
        cout << endl;
     }

     delete[] mahasiswa;

     return 0;
}
