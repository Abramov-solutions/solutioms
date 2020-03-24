#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;
    cout << (abs(x) - abs(y)) / (1 + abs(x*y));
}
