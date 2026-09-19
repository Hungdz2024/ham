#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);

    int left = 0;
    int right = s.length() - 1;
    bool isPalindrome = true;

    while (left < right) {
        if (tolower(s[left]) != tolower(s[right])) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome) {
        cout << "Chuoi la chuoi doi xung (Palindrome)." << endl;
    } else {
        cout << "Chuoi khong phai la chuoi doi xung." << endl;
    }

    return 0;
}
