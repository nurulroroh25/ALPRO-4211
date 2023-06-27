#include <iostream>
using namespace std;

struct Sepeda{
    string merk;
    string type;
    string tahun;
    string harga;
};

int main(){

Sepeda sepeda = {"Polygon","sepeda gunung","2013","2000000"};
Sepeda* sepedaPtr = &sepeda;

cout << "struk pada sepeda: "<<endl;
cout <<"merk: "<< sepedaPtr->merk <<endl;
cout <<"type: "<< sepedaPtr->type <<endl;
cout <<"tahun: "<< sepedaPtr->tahun <<endl;
cout <<"harga: "<< sepedaPtr->harga <<endl;



return 0;
}
