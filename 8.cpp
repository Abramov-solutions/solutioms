#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double r, n, p;
    cin >> r >> n;
    p=2 * r * n * tan(M_PI/n);
    cout << p;
}
