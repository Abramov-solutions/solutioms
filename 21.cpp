#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double c, d, x1, x2, dcr, res;
    cin >> c >> d;
    dcr = 9 + 4 * abs(c * d);
    x2 = (3 - sqrt(dcr)) / 2;
    x1 = (3 + sqrt(dcr)) / 2;
    if (x2 > x1) {
        double temp = x2;
        x2 = x1;
        x1 = temp;
    }
    res = abs(pow(sin(abs(c * pow(x1, 3) + d * pow(x2, 2) - c * d)), 3) /
            (sqrt((pow(c * pow(x1, 3) + d * pow(x2, 2) - x1, 2) + 3.14)))) +
                    tan(c * pow(x1, 3) + d * pow(x2, 2) - x1);
    cout << res;
}
