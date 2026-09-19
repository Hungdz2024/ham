#include <iostream>
#include <string>

using namespace std;

int main() {
    string email;
    cout << "Nhap dia chi email: ";
    cin >> email;

    size_t atPos = email.find('@');

    if (atPos != string::npos && atPos > 0 && atPos < email.length() - 1) {
        string username = email.substr(0, atPos);
        string domain = email.substr(atPos + 1);

        cout << "Ten dang nhap: " << username << endl;
        cout << "Domain: " << domain << endl;
    } else {
        cout << "Email khong hop le!" << endl;
    }

    return 0;
}
