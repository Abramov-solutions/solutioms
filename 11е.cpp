#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y, z, a, b;
    cin >> x >> y >> z;
    a = (1 + pow(sin(x + y), 2)) / (2 + abs(x - 2 * x / (1 + pow(x, 2) * pow(y, 2)))) + x;
    b = pow(cos(atan(1 / z)), 2);
    cout << a << '\n' << b;
}
