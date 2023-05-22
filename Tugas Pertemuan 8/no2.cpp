//NAMA : NURUL BAROROH
//NIM : A11.2022.14802
//KELP : 4211
//METODE INSERTION SORTING

#include<iostream>
using namespace std;

void insertionSort (int arr[],int n, int i){
for (i=1;i<n;i++){
    int key = arr[i];
    int j= i-1;
        while (j >=0 && arr[j]< key){
            arr[j+1]= arr[j];
            j--;
        }
        arr [j+1] = key;
}
}
int main (){
int arr[]={3,2,4,5,6};
int i;
int n=sizeof(arr)/sizeof(*arr);

cout<<"Sebelum urut: ";
for (i=1;i<n;i++){
    cout <<arr[i]<<" ";
}
insertionSort(arr, n,i);

cout<< "\nSetelah urut: ";
for (i=1;i<n;i++){
    cout <<arr[i]<<" ";
}
return 0;
}
