#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, tuCu, tuMoi;
    cout << "Nhap chuoi ban dau: ";
    getline(cin, s);
    cout << "Nhap tu can thay the: ";
    getline(cin, tuCu);
    cout << "Nhap tu thay the moi: ";
    getline(cin, tuMoi);

    size_t pos = s.find(tuCu);
    if (pos != string::npos) {
        s.replace(pos, tuCu.length(), tuMoi);
        cout << "Chuoi sau khi thay the: " << s << endl;
    } else {
        cout << "Khong tim thay tu can thay the." << endl;
    }

    return 0;
}
