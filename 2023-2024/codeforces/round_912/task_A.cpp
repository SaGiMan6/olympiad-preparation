#include "iostream"
#include "queue"
#include "string"

#define ll long long

using namespace std;


struct stct {
    ll now;
    ll bfr;
};


int main() {
    ll t;
    cin >> t;
    queue<string> results;

    for (ll i = 0; i < t; ++i) {
        ll n, k;
        cin >> n >> k;

        stct nums;
        cin >> nums.bfr;
        bool ubv = true, rst = true;

        for (int j = 0; j < n - 1; ++j) {
            cin >> nums.now;

            if (nums.now < nums.bfr) {
                rst = false;
            }
            if (nums.now > nums.bfr) {
                ubv = false;
            }

            nums.bfr = nums.now;
        }

        if (k == n and !ubv and !rst) {
            results.push("NO");
        } else if (k == 1 and k < n and !rst) {
            results.push("NO");
        } else {
            results.push("YES");
        }
    }

    for (int i = 0; i < t; ++i) {
        cout << results.front() << "\n";
        results.pop();
    }
}