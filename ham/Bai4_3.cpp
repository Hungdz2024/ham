#include <iostream>
using namespace std;

int rutTien(int soDuHienTai, int soTien) {
    if (soTien <= soDuHienTai) {
        return soDuHienTai - soTien;
    }
    cout << "So du khong du!" << endl;
    return soDuHienTai;
}

int napTien(int soDuHienTai, int soTien) {
    return soDuHienTai + soTien;
}

int main() {
    int soDu = 1000;

    soDu = napTien(soDu, 500);
    cout << "So du sau nap: " << soDu << endl;

    soDu = rutTien(soDu, 200);
    cout << "So du sau rut: " << soDu << endl;

    return 0;
}
