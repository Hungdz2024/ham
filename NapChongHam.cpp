#include <iostream>
using namespace std;
int tinhTong(int a, int b) {
    return a + b;
}

int tinhTong(int a, int b, int c) {
    return a + b + c;
}
double tinhTong(double a, double b) {
    return a + b;
}
int main() {
    cout << "tinhTong(3, 5) = " << tinhTong(3, 5) << endl;
    cout << "tinhTong(3, 5, 7) = " << tinhTong(3, 5, 7) << endl;
    cout << "tinhTong(3.5, 2.5) = " << tinhTong(3.5, 2.5) << endl;
    return 0;
}