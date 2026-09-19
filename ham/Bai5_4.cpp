#include <iostream>
using namespace std;

void tinhMinMax(int a[], int n, int &minVal, int &maxVal) {
    if (n <= 0) return;
    minVal = a[0];
    maxVal = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] < minVal) minVal = a[i];
        if (a[i] > maxVal) maxVal = a[i];
    }
}

int main() {
    int arr[] = {12, 4, 56, -3, 89, 21};
    int n = sizeof(arr) / sizeof(arr[0]);

    int minVal = 0, maxVal = 0;
    tinhMinMax(arr, n, minVal, maxVal);

    cout << "Gia tri nho nhat (Min): " << minVal << endl;
    cout << "Gia tri lon nhat (Max): " << maxVal << endl;

    return 0;
}
