#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1;
    s1 = "Hello";

    string s2 = "World";

    string s3(s2);

    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
    cout << "s3: " << s3 << endl;

    cout << "\nGiai thich su khac nhau:" << endl;
    cout << "1. s1: Khai bao bien truoc roi moi gan gia tri sau." << endl;
    cout << "2. s2: Khoi tao gia tri truc tiep ngay khi khai bao." << endl;
    cout << "3. s3: Khoi tao bang copy tu chuoi da ton tai (copy constructor)." << endl;

    return 0;
}
