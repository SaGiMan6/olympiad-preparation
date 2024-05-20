#include "iostream"
#include "vector"
#include "utility"

#define ll long long
#define pl pair<ll, ll>

using namespace std;


int main() {
    ios::sync_with_stdio(false);

    ll n, m;
    cin >> n >> m;

    if (m == 0) {
        cout << 0;
    } else {
        vector<pl> sktrs(m);
        for (ll i = 0; i < m; ++i) {
            pl temp_p;
            cin >> temp_p.first >> temp_p.second;

            sktrs[i] = temp_p;
        }

        ll sec = 0;

        for (ll i = 0; i < m; ++i) {
            if (sktrs[i].first - 1 > sec) {
                sec = sktrs[i].first - 1 + sktrs[i].second;
            } else {
                sec += sktrs[i].second;
            }
        }

        cout << sec;
    }
}