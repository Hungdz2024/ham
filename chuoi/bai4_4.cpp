#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);

    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }

    cout << "Chuoi sau khi dao nguoc: " << s << endl;

    return 0;
}
