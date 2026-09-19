#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cout << "Nhap mot chuoi: ";
    getline(cin, s);

    cout << "Do dai chuoi (dung length): " << s.length() << endl;
    cout << "Do dai chuoi (dung size): " << s.size() << endl;

    return 0;
}
