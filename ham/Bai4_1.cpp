#include <iostream>
using namespace std;

int x = 10;

void thayDoi() {
    int x = 20;
    cout << x << endl;
}

int main() {
    thayDoi();
    cout << x << endl;
    return 0;
}
