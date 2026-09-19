#include <iostream>
using namespace std;
double tinhDienTich(double dai, double rong) {
    return dai * rong;
}
double tinhChuVi(double dai, double rong) {
    return (dai + rong) * 2;
}
double tinhPhiGiaoHang(double khoangCach, double phiMoiKm = 5000) {
    return khoangCach * phiMoiKm;
}
int main() {
    double dai1 = 5, rong1 = 3;
    cout << "Hinh chu nhat 1 (" << dai1 << " x " << rong1 << "):" << endl;
    cout << "  Dien tich: " << tinhDienTich(dai1, rong1) << endl;
    cout << "  Chu vi: " << tinhChuVi(dai1, rong1) << endl;
    double dai2 = 8, rong2 = 4;
    cout << "Hinh chu nhat 2 (" << dai2 << " x " << rong2 << "):" << endl;
    cout << "  Dien tich: " << tinhDienTich(dai2, rong2) << endl;
    cout << "  Chu vi: " << tinhChuVi(dai2, rong2) << endl;
    double phi1 = tinhPhiGiaoHang(10);
    cout << "Giao 10km (phi mac dinh): " << phi1 << " dong" << endl;
    double phi2 = tinhPhiGiaoHang(10, 7000);
    cout << "Giao 10km (phi rieng 7000/km): " << phi2 << " dong" << endl;
    return 0;
}