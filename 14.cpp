#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double m1, m2, r, f, g = 6.7 * pow(10, -11);
    cin >> m1 >> m2 >> r;
    f = g * m1 * m2 / pow(r, 2);
    cout << f;
}
