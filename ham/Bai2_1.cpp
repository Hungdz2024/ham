#include <iostream>
using namespace std;

int tinhTong(int a, int b) {
    return a + b;
}

int main() {
    cout << "Tong 5 + 10 = " << tinhTong(5, 10) << endl;
    cout << "Tong -3 + 7 = " << tinhTong(-3, 7) << endl;
    cout << "Tong 100 + 250 = " << tinhTong(100, 250) << endl;
    return 0;
}
