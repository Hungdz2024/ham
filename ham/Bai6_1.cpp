#include <iostream>
using namespace std;

float cong(float a, float b) { return a + b; }
float tru(float a, float b)  { return a - b; }
float nhan(float a, float b) { return a * b; }
float chia(float a, float b) {
    if (b == 0) {
        cout << "Loi: Khong the chia cho 0!" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    float a, b;
    char phepTinh;

    cout << "Nhap so thu nhat: ";
    cin >> a;
    cout << "Nhap phep tinh (+, -, *, /): ";
    cin >> phepTinh;
    cout << "Nhap so thu hai: ";
    cin >> b;

    switch (phepTinh) {
        case '+': cout << "Ket qua: " << cong(a, b) << endl; break;
        case '-': cout << "Ket qua: " << tru(a, b) << endl; break;
        case '*': cout << "Ket qua: " << nhan(a, b) << endl; break;
        case '/': cout << "Ket qua: " << chia(a, b) << endl; break;
        default:  cout << "Phep tinh khong hop le!" << endl; break;
    }

    return 0;
}
