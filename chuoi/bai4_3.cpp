#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    char c;

    cout << "Nhap chuoi: ";
    getline(cin, s);
    cout << "Nhap ky tu can tim: ";
    cin >> c;

    int dem = 0;
    for (int i = 0; i < (int)s.length(); i++) {
        if (s[i] == c) {
            dem++;
        }
    }

    cout << "Ky tu '" << c << "' xuat hien " << dem << " lan trong chuoi." << endl;

    return 0;
}
