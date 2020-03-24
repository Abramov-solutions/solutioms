#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y, z, a, b;
    cin >> x >> y >> z;
    a = (sqrt(abs(x - 1)) - pow(abs(y), 1 / 3)) / (1 + pow(x, 2) / 2 + pow(y, 2) / 4);
    b = x * (atan(z) + exp(-(x + 3)));
    cout << a << '\n' << b;
}
