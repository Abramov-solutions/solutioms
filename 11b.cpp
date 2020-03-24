#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y, z, a, b;
    cin >> x >> y >> z;
    a = (3 + exp(y - 1)) / (1 + pow(x, 2) * abs(y - tan(z)));
    b = 1 + abs(y - x) + pow(y - x, 2) / 2 + pow(abs(y - x), 3) / 3;
    cout << a << '\n' << b;
}
