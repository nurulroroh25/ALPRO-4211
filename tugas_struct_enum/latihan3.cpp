#include <iostream>
using namespace std;

typedef struct {
    double panjang;
    double lebar;
} PersegiPanjang;

typedef struct {
    double jariJari;
} Lingkaran;

typedef struct {
    double jariJari;
    double tinggi;
} Kerucut;

typedef struct {
    double jariJari;
} Bola;

double hitungLuasPersegiPanjang(PersegiPanjang persegiPanjang) {
    return persegiPanjang.panjang * persegiPanjang.lebar;
}

double hitungLuasLingkaran(Lingkaran lingkaran) {
    return (22.0 / 7.0) * lingkaran.jariJari * lingkaran.jariJari;
}

double hitungVolumeKerucut(Kerucut kerucut) {
    return (1.0 / 3.0) * (22.0 / 7.0) * kerucut.jariJari * kerucut.jariJari * kerucut.tinggi;
}

double hitungVolumeBola(Bola bola) {
    return (4.0 / 3.0) * (22.0 / 7.0) * bola.jariJari * bola.jariJari * bola.jariJari;
}

int main() {
    PersegiPanjang persegi = {5.0, 8.0};
    Lingkaran lingkaran = {3.0};
    Kerucut kerucut = {4.0, 6.0};
    Bola bola = {2.0};

    double luasPersegiPanjang = hitungLuasPersegiPanjang(persegi);
    double luasLingkaran = hitungLuasLingkaran(lingkaran);
    double volumeKerucut = hitungVolumeKerucut(kerucut);
    double volumeBola = hitungVolumeBola(bola);

    cout << "Luas Persegi Panjang: " << luasPersegiPanjang << std::endl;
    cout << "Luas Lingkaran: " << luasLingkaran << std::endl;
    cout << "Volume Kerucut: " << volumeKerucut << std::endl;
    cout << "Volume Bola: " << volumeBola << std::endl;

    return 0;
}
