#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, tuKhoa;
    cout << "Nhap chuoi: ";
    getline(cin, s);
    cout << "Nhap tu khoa can tim: ";
    getline(cin, tuKhoa);

    size_t pos = s.find(tuKhoa);
    if (pos != string::npos) {
        cout << "Tu khoa xuat hien tai vi tri: " << pos << endl;
    } else {
        cout << "Khong tim thay tu khoa trong chuoi." << endl;
    }

    return 0;
}
