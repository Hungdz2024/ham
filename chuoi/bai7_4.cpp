#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string cau;
    cout << "Nhap mot cau: ";
    getline(cin, cau);

    int soTu = 0;
    bool trongTu = false;

    for (size_t i = 0; i < cau.length(); i++) {
        if (!isspace(cau[i])) {
            if (!trongTu) {
                soTu++;
                trongTu = true;
            }
        } else {
            trongTu = false;
        }
    }

    cout << "So luong tu trong cau: " << soTu << endl;

    return 0;
}
