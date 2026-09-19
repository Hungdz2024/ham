#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);

    int chu = 0, so = 0, khoangTrang = 0;

    for (int i = 0; i < (int)s.length(); i++) {
        if (isalpha(s[i])) {
            chu++;
        } else if (isdigit(s[i])) {
            so++;
        } else if (isspace(s[i])) {
            khoangTrang++;
        }
    }

    cout << "So luong chu cai: " << chu << endl;
    cout << "So luong chu so: " << so << endl;
    cout << "So luong khoang trang: " << khoangTrang << endl;

    return 0;
}
