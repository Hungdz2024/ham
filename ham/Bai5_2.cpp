#include <iostream>
using namespace std;

void hoanDoi(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    cout << "Truoc hoan doi: x = " << x << ", y = " << y << endl;

    hoanDoi(x, y);

    cout << "Sau hoan doi:   x = " << x << ", y = " << y << endl;
    return 0;
}
