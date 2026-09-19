#include <iostream>
#include <string>

using namespace std;

int main() {
    int diem;
    cout << "Nhap diem so: ";
    cin >> diem;

    string thongBao = "Ban da dat duoc " + to_string(diem) + " diem trong ky thi!";
    cout << thongBao << endl;

    return 0;
}
