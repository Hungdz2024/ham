#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1, s2;
    cout << "Nhap chuoi thu nhat: ";
    getline(cin, s1);
    cout << "Nhap chuoi thu hai: ";
    getline(cin, s2);

    if (s1 == s2) {
        cout << "Hai chuoi bang nhau." << endl;
    } else {
        cout << "Hai chuoi khac nhau." << endl;
        if (s1 < s2) {
            cout << "Chuoi 1 (\"" << s1 << "\") dung truoc Chuoi 2 (\"" << s2 << "\") theo thu tu tu dien." << endl;
        } else {
            cout << "Chuoi 2 (\"" << s2 << "\") dung truoc Chuoi 1 (\"" << s1 << "\") theo thu tu tu dien." << endl;
        }
    }

    return 0;
}
