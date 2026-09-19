#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool laSoHopLe(const string& s) {
    if (s.empty()) return false;
    size_t start = 0;
    if (s[0] == '-' || s[0] == '+') {
        if (s.length() == 1) return false;
        start = 1;
    }
    for (size_t i = start; i < s.length(); i++) {
        if (!isdigit(s[i])) return false;
    }
    return true;
}

int main() {
    string s;
    cout << "Nhap chuoi: ";
    cin >> s;

    cout << "\nNguyen nhan loi doan code mau: Chuoi 'abc123' bat dau bang ky tu chu," << endl;
    cout << "ham stoi() khong the parse bat ky chu so nao o dau chuoi nen nem ra ngoai le std::invalid_argument (runtime error)." << endl;

    cout << "\nKiem tra chuoi hop le truoc khi chuyen doi:" << endl;
    if (laSoHopLe(s)) {
        int n = stoi(s);
        cout << "Gia tri chuyen doi: " << n << endl;
    } else {
        cout << "Chuoi khong hop le, khong phai la so nguyen!" << endl;
    }

    return 0;
}
