#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);

    string tuChen;
    int viTriChen;
    cout << "Nhap tu can chen: ";
    getline(cin, tuChen);
    cout << "Nhap vi tri muon chen (0 den " << s.length() << "): ";
    cin >> viTriChen;

    if (viTriChen >= 0 && viTriChen <= (int)s.length()) {
        s.insert(viTriChen, tuChen);
        cout << "Chuoi sau khi chen: " << s << endl;
    }

    int viTriXoa, soLuongXoa;
    cout << "Nhap vi tri bat dau xoa: ";
    cin >> viTriXoa;
    cout << "Nhap so luong ky tu can xoa: ";
    cin >> soLuongXoa;

    if (viTriXoa >= 0 && viTriXoa < (int)s.length()) {
        s.erase(viTriXoa, soLuongXoa);
        cout << "Chuoi sau khi xoa: " << s << endl;
    }

    return 0;
}
