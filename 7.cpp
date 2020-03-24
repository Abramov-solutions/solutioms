#include <iostream>

using namespace std;

int main() {
    double u1, u2, t1, t2;
    cin >> u1 >> t1 >> u2 >> t2;
    cout << u1 + u2 << '\n' << (u1 * t1 + u2 * t2) / (u1 + u2);
}
