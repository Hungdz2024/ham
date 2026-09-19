#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cout << "Nhap mot chuoi so: ";
    cin >> s;

    int so = stoi(s);
    int ketQua = so + 10;

    cout << "So sau khi chuyen doi: " << so << endl;
    cout << "Ket qua sau khi cong them 10: " << ketQua << endl;

    return 0;
}
