#include <iostream>
using namespace std;
int tinhTong(int a, int b) {
    return a + b;
}
int main() {
    int ketQua1 = tinhTong(3, 5);
    int ketQua2 = tinhTong(10, 20);
    cout << "Tong lan 1: " << ketQua1 << endl;
    cout << "Tong lan 2: " << ketQua2 << endl;
    int tongCaHai = ketQua1 + ketQua2;
    cout << "Cong ca hai lan lai: " << tongCaHai << endl;
    if (ketQua1 > ketQua2) {
        cout << "Lan 1 lon hon lan 2." << endl;
    } else {
        cout << "Lan 2 lon hon hoac bang lan 1." << endl;
    }
    return 0;
}