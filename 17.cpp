#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double r1 = 20, r2, s1, s2;
    cin >> r2;
    s1 = M_PI * pow(r1, 2);
    s2 = M_PI * pow(r2, 2);
    cout << s2 - s1;
}
