#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Nhap so luong ten N: ";
    cin >> n;
    cin.ignore();

    vector<string> ds(n);
    for (int i = 0; i < n; i++) {
        cout << "Nhap ten thu " << i + 1 << ": ";
        getline(cin, ds[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i] > ds[j]) {
                string temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }

    cout << "\nDanh sach sau khi sap xep theo alphabet:" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << ds[i] << endl;
    }

    return 0;
}
