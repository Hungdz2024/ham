#include <iostream>
#include <string>
using namespace std;

void inThongTin(string ten, int tuoi = 18, string queQuan = "Chua ro") {
    cout << "Ten: " << ten << " | Tuoi: " << tuoi << " | Que quan: " << queQuan << endl;
}

int main() {
    inThongTin("Tris", 25, "Ha Noi");
    inThongTin("Nam", 20);
    inThongTin("Lan");
    return 0;
}
