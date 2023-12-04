#include <iostream>

#define ll long long

using namespace std;


int main() {
    ll n, fac_1 = 1, fac_2 = 1;
    cin >> n;

    for (ll i = 1; i < n + 1; ++i) {
        fac_1 = fac_1 * i;
    }

    for (ll i = 1; i < n - 1; ++i) {
        fac_2 = fac_2 * i;
    }

    cout << fac_1 - ((n - 1) * 2 * fac_2);
}
