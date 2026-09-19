#include <iostream>
using namespace std;

void inBinhPhuong(int n) {
    cout << "Binh phuong cua " << n << " la: " << n * n << endl;
}

int tinhBinhPhuong(int n) {
    return n * n;
}

int main() {
    inBinhPhuong(5);

    int kq = tinhBinhPhuong(5);
    cout << "Ket qua + 10: " << kq + 10 << endl;

    return 0;
}
