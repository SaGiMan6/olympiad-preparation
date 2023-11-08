#include "iostream"
#include "vector"

#define ll long long

using namespace std;


int main() {
    ll n;
    cin >> n;

    vector<ll> data(n), numbers(100001, 0), answers(100001, 0);

    for (ll i = 0; i < n; i++) {
        cin >> data[i];
    }

    for (ll i = 0; i < n; i++) {
        numbers[data[i]]++;
    }

    answers[1] = numbers[1];
    for (ll i = 2; i < 100001; i++) {
        if (answers[i - 1] > (answers[i - 2] + numbers[i] * i)) {
            answers[i] = answers[i - 1];
        } else {
            answers[i] = answers[i - 2] + numbers[i] * i;
        }
    }

    cout << answers[100000];
}