#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double ang1, ang2, ang3, a, b, c, r;
    cin >> ang1 >> ang2 >> ang3 >> r;
    a = 2 * r * sin(ang1);
    b = 2 * r * sin(ang2);
    c = 2 * r * sin(ang3);
    cout << a << b << c;
}
