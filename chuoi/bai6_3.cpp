#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    char hoTenChar[100];
    cout << "Nhap ho ten (char[]): ";
    cin.getline(hoTenChar, 100);

    char chaoChar[150] = "Xin chao ";
    strcat(chaoChar, hoTenChar);
    cout << "Ket qua char[]: " << chaoChar << endl;

    string hoTenStr;
    cout << "\nNhap ho ten (std::string): ";
    getline(cin, hoTenStr);

    string chaoStr = "Xin chao " + hoTenStr;
    cout << "Ket qua std::string: " << chaoStr << endl;

    cout << "\n--- SO SANH CHAR[] VA STD::STRING ---" << endl;
    cout << "1. Cach nhap: char[] dung cin.getline(mang, kich_thuoc), std::string dung getline(cin, chuoi)." << endl;
    cout << "2. Noi chuoi: char[] phai dung strcat/strncat va dam bao bo dem du lon, std::string dung toan tu + truc quan." << endl;
    cout << "3. Quan ly bo nho & An toan: char[] co kich thuoc co dinh, de bi tran bo dem (buffer overflow) va gay loi bao mat. std::string tu dong cap phat va co dan kich thuoc, an toan tuyet doi." << endl;

    return 0;
}
