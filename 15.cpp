#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double k1, k2, g, r;
    cin >> k1 >> g;
    k2 = sqrt(pow(g, 2) - pow(k1, 2));
    r = (k1 + k2 - g) / 2;
    cout << k2 << '\n' << r;
}
