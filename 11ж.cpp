#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y, z, a, b;
    cin >> x >> y >> z;
    a = log(abs((y - sqrt(abs(x))) * (x - y / (z + pow(x, 2) / 4))));
    b = x - pow(x, 2) / 6 + pow(x, 5) / 120;
    cout << a << '\n' << b;
}
