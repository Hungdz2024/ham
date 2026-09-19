#include <iostream>
using namespace std;

bool laSoChan(int n) {
    return (n % 2 == 0);
}

int main() {
    int testCases[] = {4, 7, 0, -2, 15};
    for (int n : testCases) {
        if (laSoChan(n)) {
            cout << n << " la so chan" << endl;
        } else {
            cout << n << " la so le" << endl;
        }
    }
    return 0;
}
