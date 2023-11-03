#include <iostream>
#include <math.h>

using namespace std;


int main() {
    ios::sync_with_stdio(false);


    long double a, b, c;
    long double dis;

    cin >> a >> b >> c;


    dis = (b * b) - (4 * a * c);
    if (dis > 0) {
        cout << 2 << "\n";

        cout.setf(ios::fixed);
        cout.precision(7);

        cout << ((-1 * b) + sqrt(dis)) / (2 * a) << "\n";
        cout << ((-1 * b) - sqrt(dis)) / (2 * a) << "\n";
    } else if (dis == 0) {
        cout << 1 << "\n";

        cout.setf(ios::fixed);
        cout.precision(7);

        cout << (-1 * b) / (2 * a) << "\n";
    } else {
        cout << 0 << "\n";
    }
}
