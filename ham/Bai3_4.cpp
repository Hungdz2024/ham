#include <iostream>
#include <string>
using namespace std;

string xepLoai(float diem) {
    if (diem >= 8.5f) return "Gioi";
    if (diem >= 7.0f) return "Kha";
    if (diem >= 5.0f) return "Trung binh";
    return "Yeu";
}

int main() {
    float bangDiem[] = {9.2f, 6.8f, 7.5f, 4.0f, 8.5f, 3.5f};
    int n = sizeof(bangDiem) / sizeof(bangDiem[0]);

    for (int i = 0; i < n; i++) {
        cout << "Diem: " << bangDiem[i] 
             << " -> Xep loai: " << xepLoai(bangDiem[i]) << endl;
    }

    return 0;
}
