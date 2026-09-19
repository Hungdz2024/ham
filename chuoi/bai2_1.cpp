#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cout << "Nhap chuoi (it nhat 5 ky tu): ";
    getline(cin, s);

    if (s.length() >= 5) {
        string dau = s.substr(0, 5);
        string cuoi = s.substr(s.length() - 5, 5);
        cout << "5 ky tu dau tien: " << dau << endl;
        cout << "5 ky tu cuoi cung: " << cuoi << endl;
    } else {
        cout << "Chuoi co do dai nho hon 5 ky tu." << endl;
    }

    return 0;
}
