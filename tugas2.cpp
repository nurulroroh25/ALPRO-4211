//NIM   : A11.2022.14802
//NAMA  : NURUL BAROROH
//KELP  : 4211
//TUGAS 1 PRAKTEK

#include <iostream>
using namespace std;

//Function untuk mencari nilai maksimum pada 2 bilangan
int max(int a, int b) {
    return (a > b) ? a : b;
}

//Function untuk mencari nilai minimum pada 2 bilangan
int min(int a, int b) {
    return (a < b) ? a : b;
}

//Function untuk mencari nilai maksimum pada sebuah array
int maxArray(int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

//Function untuk mencari nilai minimum pada sebuah array
int minArray(int arr[], int size) {
    int minVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

//Function untuk menentukan apakah bilangan genap atau ganjil
bool isEven(int n) {
  if (n % 2 == 0) {
    return true;
  } else {
    return false;
  }
}

//Function untuk menentukan apakah sebuah bilangan merupakan faktor dari bilangan lain
bool isFactorOf(int num, int factorOf) {
    return (factorOf % num == 0);
}

//Function untuk menjumlahkan bilangan genap dan ganjil dalam sebuah array
void sumEvenOdd(int arr[], int size, int& sumEven, int& sumOdd) {
    for (int i = 0; i < size; i++) {
        if (isEven(arr[i])) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }
}

//
int main() {
    int a = 7, b = 14;
    cout << "Max dari " << a << " dan " << b << " adalah " << max(a, b) << endl;
    cout << "Min dari " << a << " dan " << b << " adalah " << min(a, b) << endl;

    int arr[] = {3, 2, 7, 1, 9, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Max dari array adalah " << maxArray(arr, size) << endl;
    cout << "Min dari array adalah " << minArray(arr, size) << endl;

    int n;
    cout << "Masukkan angka: ";
    cin >> n;

    if (isEven(n)) {
    cout << n << " is even." << endl;
        } else {
    cout << n << " is odd." << endl;
    }

    int num = 5;
    int factorOf = 9;
    cout << num << " " << (isFactorOf(num, factorOf) ? "adalah" : "bukan") << " faktor dari " << factorOf << endl;

    int sumEven = 0, sumOdd = 0;
    sumEvenOdd(arr, size, sumEven, sumOdd);
    cout << "Jumlah bilangan genap dalam array adalah " << sumEven << endl;
    cout << "Jumlah bilangan ganjil dalam array adalah " << sumOdd << endl;

    return 0;
}
