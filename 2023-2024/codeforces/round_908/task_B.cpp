#include "iostream"
#include "algorithm"
#include "queue"
#include "vector"
#include "unordered_map"
#include "string"

#define ll long long

using namespace std;


int main() {
    ios::sync_with_stdio(false);

    ll t, n;
    queue<string> result;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        unordered_map<ll, ll> pov_data;
        ll temp, count = 0;
        cin >> n;
        pov_data.reserve(n);

        vector<ll> data(n), pre_res(n);
        for (int j = 0; j < n; ++j) {
            cin >> temp;
            data[j] = temp;
            if (pov_data.count(temp)) {
                pov_data[temp]++;
            } else {
                pov_data[temp] = 1;
            }
        }

        ll bilo = -1;
        for (int j = 0; j < n; ++j) {
            if (count == 0 and pov_data[data[j]] > 1) {
                pre_res[j] = 3;
                pov_data[data[j]]--;
                count++;
                bilo = data[j];
            } else if (pov_data[data[j]] > 1) {
                if (data[j] == bilo) {
                    pre_res[j] = 3;
                } else {
                    pre_res[j] = 2;
                    count += 1;
                }
                pov_data[data[j]]--;
            } else {
                pre_res[j] = 1;
                pov_data[data[j]]--;
            }
        }

        if (count < 2) {
            result.push("-1");
        } else {
            string bruh = "", tp;

            for (int j = 0; j < n; ++j) {
                tp = to_string(pre_res[j]);
                bruh += tp + " ";
            }

            result.push(bruh);
        }
    }

    for (ll i = 0; i < t; i++) {
        cout << result.front() << "\n";
        result.pop();
    }
}