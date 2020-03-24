#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y, z, a, b;
    cin >> x >> y >> z;
    a = y + x / (pow(y, 2) + abs(pow(x, 2) / (y + pow(x, 3) / 3)));
    b = 1 + pow(tan(z / 2), 2);
    cout << a << '\n' << b;
}
