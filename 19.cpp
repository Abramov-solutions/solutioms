#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double u1, u2, a1, a2, s, t, a, b, c, x;
    cin >> u1 >> a1 >> u2 >> a2 >> s;
    a = (a1 + a2) / 2;
    b = u1 + u2;
    c = -s;
    double d = pow(b, 2) - 4 * a * c;
    if (d > 0) {
        x = (-b + sqrt(d)) / (2 * a);
        if (x < 0) {
            x = (-b - sqrt(d)) / (2 * a);
        }
    } else if (d == 0) {
        x = -b / 2 * a;
    } else {
        cout << "No solution";
        return 0;
    }
    t = x;
    cout << t;
}
