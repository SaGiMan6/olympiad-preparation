#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m;
    cin >> n;

    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
        cin >> a[i];

    cin >> m;
    for (long long i = 0; i < m; i++) {
        long long l, r;
        cin >> l >> r;

        long long sum = 0;

        for (long long j = l - 1; j < r; j++)
            sum += a[j];

        cout << sum << "\n";
    }

    return 0;
}
