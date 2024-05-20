#include "iostream"
#include "vector"
#include "algorithm"

#define ll long long

using namespace std;


bool comp(vector<ll> a, vector<ll> b) {
    return a[0] < b[0];
}


int main() {
    ios::sync_with_stdio(false);

    ll n, m, k;
    cin >> n >> m >> k;

    vector<vector<ll>> data(n);
    for (ll i = 0; i < n; ++i) {
        ll temp;
        cin >> temp;

        data[i].push_back(temp);
        data[i].push_back(i);
        data[i].push_back(0);
    }

    for (ll i = 0; i < m; ++i) {
        ll temp;
        cin >> temp;

        data[temp - 1][2] = 1;
    }

    sort(data.begin(), data.end(), comp);

    ll counter = 0;
    data[0].push_back(0);
    for (ll i = 1; i < n; ++i) {
        if (data[i][0] > data[i - 1][0]) {
            data[i].push_back(data[i - 1][3] + 1);
            counter += data[i - 1][3] + 1;
        } else {
            data[i].push_back(data[i - 1][3]);
            counter += data[i - 1][3];
        }
    }

    if (counter > k) {
        cout << "IMPOSSIBLE";
    } else {
        cout << "POSSIBLE" << "\n";

        ll first_fvt = -1;
        for (ll i = 0; i < n; ++i) {
            if (data[i][2] == 1) {
                first_fvt = i;
                break;
            }
        }

        if (n - first_fvt <= k - counter and first_fvt >= 0) {
            ll add_num = (k - counter) / (n - first_fvt);
            for (ll i = first_fvt; i < n; ++i) {
                data[i][3] += add_num;
            }
        }

        vector<ll> results(n);
        for (ll i = 0; i < n; ++i) {
            results[data[i][1]] = data[i][3];
        }
        for (ll i = 0; i < n; ++i) {
            cout << results[i] << " ";
        }
    }
}
