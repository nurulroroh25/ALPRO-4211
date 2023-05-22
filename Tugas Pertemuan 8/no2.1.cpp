//NAMA : NURUL BAROROH
//NIM : A11.2022.14802
//KELP : 4211
//METODE BUBBLE SORTING

#include <iostream>
using namespace std;

void bubbleSort (int arr[],int n, int i,int j){
for (i=0;i<n-1;i++){
    for (j=0;j<n-i-1;j++){
    if (arr[j]<arr[j+1]){
        int temp=arr[j];
        arr[j]= arr[j+1];
        arr[j+1]=temp;
    }
}
}
}
int main (){
int arr[]={3,2,4,5,6};
int i,j;
int n=sizeof(arr)/sizeof(*arr);

cout<<"Sebelum urut: ";
for (i=0;i<n;i++){
    cout <<arr[i]<<" ";
}
bubbleSort(arr,n,i,j);

cout<< "\nSetelah urut: ";
for (i=0;i<n;i++){
    cout <<arr[i]<<" ";
}
return 0;
}
