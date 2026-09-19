#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Nhap so luong email N: ";
    cin >> n;

    vector<string> dsEmail(n);
    for (int i = 0; i < n; i++) {
        cout << "Nhap email thu " << i + 1 << ": ";
        cin >> dsEmail[i];
    }

    cout << "\n=== KET QUA XU LY DANH SACH EMAIL ===" << endl;
    for (int i = 0; i < n; i++) {
        string email = dsEmail[i];
        size_t firstAt = email.find('@');
        size_t lastAt = email.rfind('@');

        if (firstAt != string::npos && firstAt == lastAt && firstAt > 0 && firstAt < email.length() - 1) {
            string username = email.substr(0, firstAt);
            string domain = email.substr(firstAt + 1);
            cout << i + 1 << ". Email: " << email << " [HOP LE]" << endl;
            cout << "   -> Username: " << username << " | Domain: " << domain << endl;
        } else {
            cout << i + 1 << ". Email: " << email << " [KHONG HOP LE]" << endl;
        }
    }

    return 0;
}
