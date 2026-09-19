#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <vector>

using namespace std;

string chuanHoaTu(string tu) {
    if (tu.empty()) return "";
    tu[0] = toupper(tu[0]);
    for (size_t i = 1; i < tu.length(); i++) {
        tu[i] = tolower(tu[i]);
    }
    return tu;
}

int main() {
    string hoTen;
    cout << "Nhap ho ten can chuan hoa: ";
    getline(cin, hoTen);

    stringstream ss(hoTen);
    string tu;
    string ketQua = "";

    while (ss >> tu) {
        if (!ketQua.empty()) {
            ketQua += " ";
        }
        ketQua += chuanHoaTu(tu);
    }

    cout << "Ho ten sau khi chuan hoa: \"" << ketQua << "\"" << endl;

    return 0;
}
