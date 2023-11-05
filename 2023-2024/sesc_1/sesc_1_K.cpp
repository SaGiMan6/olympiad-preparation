#include <iostream>

using namespace std;


int main() {
    long long a, b, c;
    long long i = 0, j = 1e16, mid;

    cin >> a >> b >> c;


    if (((((a * 2) + (b * 3) + (c * 4)) * 2) / (a + b + c) >= 7)) {
        j = 0;
    } else {
        while (j - i > 1) {
            mid = (i + j) / 2;

            if ((((a * 2) + (b * 3) + (c * 4) + (mid * 5)) * 2) / (a + b + c + mid) >= 7) {
                j = mid;
            } else {
                i = mid;
            }
        }
    }

    cout << j;
}