#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main() {
    string matKhau;
    cout << "Nhap mat khau: ";
    getline(cin, matKhau);

    bool coChuHoa = false;
    bool coChuSo = false;
    bool duDoDai = (matKhau.length() >= 8);

    for (char c : matKhau) {
        if (isupper(c)) coChuHoa = true;
        if (isdigit(c)) coChuSo = true;
    }

    if (duDoDai && coChuHoa && coChuSo) {
        cout << "Mat khau HOP LE!" << endl;
    } else {
        cout << "Mat khau KHONG HOP LE! Ly do:" << endl;
        if (!duDoDai) {
            cout << "- Mat khau phai co toi thieu 8 ky tu (hien tai: " << matKhau.length() << ")." << endl;
        }
        if (!coChuHoa) {
            cout << "- Mat khau phai co it nhat 1 chu cai in hoa." << endl;
        }
        if (!coChuSo) {
            cout << "- Mat khau phai co it nhat 1 chu so." << endl;
        }
    }

    return 0;
}
