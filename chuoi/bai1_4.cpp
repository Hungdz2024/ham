#include <iostream>
#include <string>

using namespace std;

int main() {
    string ten, ngheNghiep;
    int tuoi;

    cout << "Nhap ten: ";
    getline(cin, ten);
    cout << "Nhap tuoi: ";
    cin >> tuoi;
    cin.ignore();
    cout << "Nhap nghe nghiep: ";
    getline(cin, ngheNghiep);

    string cau = "Toi ten la " + ten + ", " + to_string(tuoi) + " tuoi, nghe nghiep la " + ngheNghiep + ".";
    cout << cau << endl;

    return 0;
}
