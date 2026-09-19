#include <iostream>
using namespace std;
double tinhTrungBinh(double toan, double van, double anh) {
    return (toan + van + anh) / 3;
}
void congDiemThuong(double &diem, double soDiemThuong) {
    diem = diem + soDiemThuong;
}
int main() {
    cout << "Hoc sinh 1 - Trung binh: " << tinhTrungBinh(8, 7, 9) << endl;
    cout << "Hoc sinh 2 - Trung binh: " << tinhTrungBinh(6, 8, 7) << endl;
    cout << "Hoc sinh 3 - Trung binh: " << tinhTrungBinh(9, 9, 10) << endl;
    double diemHocSinh1 = 7.5;
    double diemHocSinh2 = 8.0;
    cout << "\nTruoc khi cong thuong: HS1 = " << diemHocSinh1 << ", HS2 = " << diemHocSinh2 << endl;
    congDiemThuong(diemHocSinh1, 0.5);
    congDiemThuong(diemHocSinh2, 1.0);
    cout << "Sau khi cong thuong: HS1 = " << diemHocSinh1 << ", HS2 = " << diemHocSinh2 << endl;
    return 0;
}