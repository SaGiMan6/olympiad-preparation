#include <iostream>

#define ll long long
#define ld long double

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    ld a, b, c;
    cin >> a >> b >> c;

    ld average = (a * 2 + b * 3 + c * 4) / (a + b + c);

    if (average >= 3.5) {
        cout << 0;
    } else {
        ll left = 1;
        ll right = a + b + c;

        while (left < right) {
            ll mid = (left + right) / 2;
            ld new_average = (a * 2 + b * 3 + c * 4 + mid * 5) / double(a + b + c + mid);

            if (new_average >= 3.5) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        cout << left;
    }

    return 0;
}