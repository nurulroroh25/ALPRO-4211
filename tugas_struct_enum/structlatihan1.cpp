#include <iostream>
using namespace std;

struct Luas {
    int panjang;
    int lebar;
    float phi;
    int r;
};

struct Volume {
    float phi;
    int t;
    int r;
};

int main() {
    Luas luasPersegi;
    luasPersegi.panjang = 8;
    luasPersegi.lebar = 5;
    luasPersegi.phi = 3.14;
    luasPersegi.r = 3;

    Volume volumeKerucut;
    volumeKerucut.phi = 3.14;
    volumeKerucut.r = 4;
    volumeKerucut.t = 2;

    cout << "Luas Persegi Panjang: " << luasPersegi.panjang * luasPersegi.lebar << endl;
    cout << "Luas Lingkaran: " << luasPersegi.phi * luasPersegi.r * luasPersegi.r << endl;
    cout << "Volume Kerucut: " << (1.0 / 3.0) * volumeKerucut.phi * volumeKerucut.r * volumeKerucut.r * volumeKerucut.t << endl;
    cout << "Volume Bola: " << (4.0 / 3.0) * volumeKerucut.phi * volumeKerucut.r * volumeKerucut.r * volumeKerucut.r << endl;

    return 0;
}
