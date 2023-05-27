//Nama: Nurul Baroroh
//NIM : A11.2022.14802
//KELP: 4211

#include <iostream>
using namespace std;
int rekursifPenambahan(int a, int b){
    if (b==0)
        return a;
    else
        return 1 + rekursifPenambahan(a, b-1);
}
int rekursifPengurangan(int a, int b){
     if (b==0)
        return a;
     else
        return rekursifPengurangan (a-1, b-1);
}
int rekursifPerkalian (int a, int b){
    if (b==0)
        return 0;
    else
        return a + rekursifPerkalian (a, b-1);
}
int rekursifPembagian (int a, int b){
    if (a < b)
        return 0;
    else
        return 1 + rekursifPembagian (a-b,b);
}
int rekursifPangkat (int basis, int eksponen){
    if (eksponen == 0) {
        return 1;
    } else {
        return basis * rekursifPangkat(basis, eksponen - 1);
    }
}
int main(){
    cout << rekursifPenambahan(6,4)<< endl;
    cout << rekursifPengurangan (6,3) <<endl;
    cout << rekursifPerkalian (3,4) <<endl;
    cout << rekursifPembagian (8,4) <<endl;
    cout << rekursifPangkat (2,2) << endl;
return 0;
}
