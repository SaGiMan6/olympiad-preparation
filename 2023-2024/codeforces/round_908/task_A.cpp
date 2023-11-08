#include "iostream"
#include "string"
#include "queue"

#define ll long long

using namespace std;


int main() {
    ios::sync_with_stdio(false);

    ll t, n;
    string set;
    queue<char> result;
    cin >> t;

    for (ll i = 0; i < t; i++) {
        ll a = 0, b = 0;
        cin >> n >> set;

        result.push(set[n - 1]);
    }

    for (ll i = 0; i < t; i++) {
        cout << result.front() << "\n";
        result.pop();
    }
}