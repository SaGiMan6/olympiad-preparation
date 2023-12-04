#include "iostream"

#define ll long long

using namespace std;


int main() {
    ios::sync_with_stdio(false);

    ll n, m, k;
    cin >> n >> m >> k;

    if (k == 1) {
        cout << 0;
    } else if (k <= m) {
        cout << n * (m - 1);
    } else {
        cout << (n * (m - 1)) + ((n - 1) * m);
    }
}
