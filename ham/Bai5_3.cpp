#include <iostream>
using namespace std;

void tang1(int n) {
    n = n + 1;
}

void tang2(int &n) {
    n = n + 1;
}

int main() {
    int a = 5;
    tang1(a);
    cout << "Gia tri sau tang1 (Pass-by-value): " << a << endl;

    tang2(a);
    cout << "Gia tri sau tang2 (Pass-by-reference): " << a << endl;

    return 0;
}
