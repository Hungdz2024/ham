#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);

    cout << "Cac ky tu trong chuoi:" << endl;
    for (int i = 0; i < (int)s.length(); i++) {
        cout << s[i] << endl;
    }

    return 0;
}
