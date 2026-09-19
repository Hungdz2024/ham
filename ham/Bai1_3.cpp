#include <iostream>
using namespace std;

void inBangCuuChuong(int n) {
    cout << "--- Bang cuu chuong " << n << " ---" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    cout << endl;
}

int main() {
    inBangCuuChuong(2);
    inBangCuuChuong(3);
    inBangCuuChuong(5);

    return 0;
}
