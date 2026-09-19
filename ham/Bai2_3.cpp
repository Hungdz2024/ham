#include <iostream>
using namespace std;

float tinhDienTich(float dai, float rong = 1.0f) {
    return dai * rong;
}

int main() {
    float s1 = tinhDienTich(5.0f, 3.0f);
    float s2 = tinhDienTich(5.0f);

    cout << "Dien tich (dai=5, rong=3): " << s1 << endl;
    cout << "Dien tich (dai=5, rong mac dinh): " << s2 << endl;

    return 0;
}
