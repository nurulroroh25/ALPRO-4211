//NAMA : NURUL BAROROH
//NIM : A11.2022.14802
//KELP : 4211
//N0 1
#include <iostream>
using namespace std;

bool isGanjil(int bil){
    return bil % 2 ==1;
}
void cetakGanjilTerkecil(int arr[],int size){
    int i;
    int GanjilTerkecil= -1;
    int GanjilIndexTerkecil= -1;
    for (i=0;i<size;i++){
        if(isGanjil(arr[i])){
            if(GanjilTerkecil == -1 || arr[i]< GanjilTerkecil){
                GanjilTerkecil=arr[i];
                GanjilIndexTerkecil=i;
            }
        }
    }
    if(GanjilIndexTerkecil == -1){
        cout <<"Tidak ada bilangan ganjil di dalam deret" ;
    } else {
        cout <<"Bilangan ganjil terkecil: "<< GanjilTerkecil<< endl;
        cout << "dan berada di index ke-"<<GanjilIndexTerkecil<< endl ;
    }
}

//FUNGSI UNTUK MENGUJI APAKAH BILANGAN GANJIL ATAU BUKAN
int main (){
int A[]={6,7,4,3,2};
int size= sizeof(A)/sizeof(*A);
cetakGanjilTerkecil(A,size);

int bil1=3;
int bil2=2;

if(isGanjil(bil1)){
    cout << bil1 << "adalah ganjil\n";
} else {
     cout << bil1 << "bukan ganjil";
}
if(isGanjil(bil2)){
    cout << bil2 << "adalah ganjil";
} else {
     cout << bil2 << "bukan ganjil";
}
return 0;
}
