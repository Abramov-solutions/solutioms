#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double l, s, r;
    cin >> l;
    r = l / (2 * M_PI);
    s = M_PI * pow(r, 2);
    cout << s;
}
