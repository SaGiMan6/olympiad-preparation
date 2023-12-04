#include <iostream>

#define ll long long

using namespace std;


int main() {
    ios::sync_with_stdio(false);

    ll n, m;
    cin >> n >> m;

    cout << (n + m - 1) / m;
}
