#include "iostream"
#include "vector"
#include "utility"
#include "queue"
#include "deque"

#define ll long long

using namespace std;


pair<queue<ll>, deque<ll>> add_num(pair<queue<ll>, deque<ll>> prs, ll num) {
    prs.first.push(num);
    if (!prs.second.empty()) {
        if (num > prs.second.back()) {
            while (!prs.second.empty()) {
                if (num > prs.second.back()) {
                    prs.second.pop_back();
                } else {
                    break;
                }
            }
            prs.second.push_back(num);
        } else {
            prs.second.push_back(num);
        }
    } else {
        prs.second.push_back(num);
    }

    return prs;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    vector<ll> data(n);
    for (int i = 0; i < n; ++i) {
        cin >> data[i];
    }

    for (int i = 0; i < n; ++i) {
        ll min = 1e10;
        pair<queue<ll>, deque<ll>> prs;

        for (int j = 0; j < n; ++j) {
            if (i > j) {
                prs = add_num(prs, data[j]);
            } else if (i == j) {
                prs = add_num(prs, data[j]);

                if (min > prs.second.front()) {
                    min = prs.second.front();
                }
            } else {
                if (prs.first.front() == prs.second.front()) {
                    prs.first.pop();
                    prs.second.pop_front();
                } else {
                    prs.first.pop();
                }

                prs = add_num(prs, data[j]);

                if (min > prs.second.front()) {
                    min = prs.second.front();
                }
            }
        }
        cout << min << " ";
    }
}