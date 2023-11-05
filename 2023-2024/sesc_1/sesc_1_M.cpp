// Not solved (TL #32)

#include <iostream>

using namespace std;


long long func(long long x) {
    long double a = x, b;
    long long result;

    b = (a + 1) * (a / 2);
    result = b;

    return result;
}


int main() {
    long long l, r, a, result = 0;

    cin >> l >> r >> a;


    for (long long i = l; i < l + a; i++) {
        result += func((r - i) / a);
    }


    cout << result;
}