#include <iostream>
#include <string>

using namespace std;

int main() {
    int tuoi;
    string ten;

    cout << "Nhap tuoi: ";
    cin >> tuoi;
    cin.ignore();
    cout << "Nhap ten: ";
    getline(cin, ten);

    cout << "Tuoi: " << tuoi << ", Ten: " << ten << endl;

    cout << "\nNguyen nhan: cin >> tuoi de lai ky tu '\\n' trong bo nho dem (buffer)." << endl;
    cout << "getline se doc ngay ky tu '\\n' do va ket thuc ma khong cho nhap ten." << endl;
    cout << "Khac phuc: Them cin.ignore() sau cin >> tuoi de xoa ky tu '\\n'." << endl;

    return 0;
}
