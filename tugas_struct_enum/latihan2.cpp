#include <iostream>

using namespace std;

//untuk mengumpulkan variabel dlm satu identitas
//studi kasus sepeda
struct sepeda{
    string merk;
    string type;
    int tahun;
    int harga;

};

//pemanggilan

int main(){
    sepeda sepeda;
    sepeda.merk="Polygon";
    sepeda.type="Sepeda Gunung";
    sepeda.tahun=2013;
    sepeda.harga=2000000;

    cout<<"Merk: "<<sepeda.merk<<endl;
    cout<<"Type: "<<sepeda.type<<endl;
    cout<<"Tahun: "<<sepeda.tahun<<endl;
    cout<<"Harga: "<<sepeda.harga<<endl;


return 0;
}


