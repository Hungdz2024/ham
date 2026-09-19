#include <iostream>
#include <string>

using namespace std;

int main() {
    string ho, ten;
    cout << "Nhap ho: ";
    cin >> ho;
    cout << "Nhap ten: ";
    cin >> ten;

    string hoTen = ho + " " + ten;
    cout << "Ho va ten day du: " << hoTen << endl;

    return 0;
}
