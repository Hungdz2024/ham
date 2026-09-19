#include <iostream>
using namespace std;

const float PI = 3.14159265f;

float tinhDienTich(float r) {
    return 4 * PI * r * r;
}

float tinhTheTich(float r) {
    return (4.0f / 3.0f) * PI * r * r * r;
}

int main() {
    float r = 3.0f;
    float dt = tinhDienTich(r);
    float tt = tinhTheTich(r);
    float tong = dt + tt;

    cout << "Dien tich mat cau: " << dt << endl;
    cout << "The tich hinh cau: " << tt << endl;
    cout << "Tong Dien tich + The tich: " << tong << endl;

    return 0;
}
