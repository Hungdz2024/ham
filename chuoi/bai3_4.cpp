#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Nguoi {
    int tuoi;
    string hoTen;
};

int main() {
    int n;
    cout << "Nhap so luong nguoi N: ";
    cin >> n;

    vector<Nguoi> ds(n);

    for (int i = 0; i < n; i++) {
        cout << "\n--- Nguoi thu " << i + 1 << " ---" << endl;
        cout << "Nhap tuoi: ";
        cin >> ds[i].tuoi;
        cin.ignore();
        cout << "Nhap ho ten: ";
        getline(cin, ds[i].hoTen);
    }

    cout << "\n=== DANH SACH NGUOI DUNG ===" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". Ho ten: " << ds[i].hoTen << " | Tuoi: " << ds[i].tuoi << endl;
    }

    return 0;
}
