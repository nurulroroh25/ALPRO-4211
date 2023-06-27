#include <iostream>
using namespace std;

enum predikat {
    cumlaude,
    sangat_memuaskan,
    memuaskan
};

int main() {
    float ipk;
    cout << "IPK: ";
    cin >> ipk;

    if (ipk > 3.50) {
        cout << "Predikat: Cumlaude" << endl;
    } else if (ipk >= 3.00 && ipk <= 3.50) {
        cout << "Predikat: Sangat Memuaskan" << endl;
    } else {
        cout << "Predikat: Memuaskan" << endl;
    }

    return 0;
}
