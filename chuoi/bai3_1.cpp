#include <iostream>
#include <string>

using namespace std;

int main() {
    string tenCin;
    cout << "Nhap ho ten (dung cin >>): ";
    cin >> tenCin;
    cout << "Ket qua voi cin >>: " << tenCin << endl;

    cin.ignore(10000, '\n');

    string tenGetline;
    cout << "\nNhap ho ten (dung getline): ";
    getline(cin, tenGetline);
    cout << "Ket qua voi getline: " << tenGetline << endl;

    cout << "\nSo sanh:" << endl;
    cout << "- cin >> dung doc khi gap khoang trang dau tien (space, tab, newline)." << endl;
    cout << "- getline doc ca dong bao gom ca khoang trang cho den khi gap ky tu xuong dong." << endl;

    return 0;
}
