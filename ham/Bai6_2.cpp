#include <iostream>
#include <string>
using namespace std;

void nhapDiem(float a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap diem sinh vien thu " << (i + 1) << ": ";
        cin >> a[i];
    }
}

float tinhTrungBinh(float a[], int n) {
    if (n <= 0) return 0.0f;
    float tong = 0.0f;
    for (int i = 0; i < n; i++) {
        tong += a[i];
    }
    return tong / n;
}

string xepLoai(float diem) {
    if (diem >= 8.5f) return "Gioi";
    if (diem >= 7.0f) return "Kha";
    if (diem >= 5.0f) return "Trung binh";
    return "Yeu";
}

int main() {
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;

    if (n <= 0) {
        cout << "So luong sinh vien phai lon hon 0!" << endl;
        return 0;
    }

    float diemSV[100];
    nhapDiem(diemSV, n);

    cout << "\n--- KET QUA QUAN LY DIEM ---" << endl;
    for (int i = 0; i < n; i++) {
        cout << "SV " << (i + 1) << ": Diem = " << diemSV[i] 
             << " | Xep loai: " << xepLoai(diemSV[i]) << endl;
    }

    float dtb = tinhTrungBinh(diemSV, n);
    cout << "\n-> Diem trung binh ca lop: " << dtb << endl;
    cout << "-> Xep loai chung: " << xepLoai(dtb) << endl;

    return 0;
}
