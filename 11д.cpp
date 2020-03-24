#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y, z, a, b;
    cin >> x >> y >> z;
    a = 2 * cos(x - M_PI * 6) / (1 / 2 + pow(sin(y), 2));
    b = 1 + (pow(z, 2)) / (3 + pow(z, 2) / 5);
    cout << a << '\n' << b;
}
