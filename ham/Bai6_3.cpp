#include <iostream>
using namespace std;

bool laSoNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void inDanhSachNguyenTo(int a, int b) {
    if (a > b) {
        int temp = a; a = b; b = temp;
    }

    cout << "Cac so nguyen to trong khoang [" << a << ", " << b << "]:\n";
    bool coSoNguyenTo = false;

    for (int i = a; i <= b; i++) {
        if (laSoNguyenTo(i)) {
            cout << i << " ";
            coSoNguyenTo = true;
        }
    }

    if (!coSoNguyenTo) {
        cout << "(Khong co)";
    }
    cout << endl;
}

int main() {
    int a = 10, b = 50;
    inDanhSachNguyenTo(a, b);
    return 0;
}
