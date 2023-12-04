#include "iostream"
#include "cmath"

#define ll long long

using namespace std;


int main() {
    ll a, b, x, y, k1, k2, k3, d1, d2, d3;
    cin >> a >> b >> x >> y;

    if (x * a > y * b) {
        k1 = (x * a - y * b) / (2 * x);
        k2 = k1 + 1;

        if (k1 > 0) {
            k3 = k1 - 1;
        } else {
            k3 = k1;
        }

        d1 = abs(x * (a - 2 * k1) - y * b);
        d2 = abs(x * (a - 2 * k2) - y * b);
        d3 = abs(x * (a - 2 * k3) - y * b);

        if (a - k2 > 0) {
            if (d3 <= d1) {
                if (d3 <= d2) {
                    cout << (a - k3);
                } else {
                    cout << (a - k2);
                }
            } else {
                if (d1 <= d2) {
                    cout << (a - k1);
                } else {
                    cout << (a - k2);
                }
            }
        } else {
            if (a - k1 > 0) {
                if (d3 <= d1) {
                    cout << (a - k3);
                } else {
                    cout << (a - k1);
                }
            } else {
                cout << (a - k3);
            }
        }
    } else {
        k1 = (-1 * x * a - y * b) / (2 * x);
        k2 = k1 + 1;

        if (k1 > 0) {
            k3 = k1 - 1;
        } else {
            k3 = k1;
        }

        d1 = abs(y * (2 * k1 - b) + x * a);
        d2 = abs(y * (2 * k2 - b) + x * a);
        d3 = abs(y * (2 * k3 - b) + x * a);

        if (k2 <= b) {
            if (d3 <= d1) {
                if (d3 <= d2) {
                    cout << (a + k3);
                } else {
                    cout << (a + k2);
                }
            } else {
                if (d1 <= d2) {
                    cout << (a + k1);
                } else {
                    cout << (a + k2);
                }
            }
        } else {
            if (k1 <= b) {
                if (d1 <= d3) {
                    cout << (a + k1);
                } else {
                    cout << (a + k3);
                }
            } else {
                cout << (a + k3);
            }
        }
    }
}