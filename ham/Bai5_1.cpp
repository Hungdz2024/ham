#include <iostream>
using namespace std;

void tang(int n) {
    n = n + 1;
}

int main() {
    int x = 5;
    tang(x);
    cout << x << endl;
    return 0;
}
