#include <iostream>
#include <string>

#define ll long long

using namespace std;


int main() {
    string str;
    char bkv;
    cin >> str >> bkv;

    ll chet = 0, ncht = 0, len = str.size();
    for (ll i = 0; i < len; ++i) {
        if (str[i] == bkv) {
            if (i % 2 == 0) {
                ncht++;
            } else {
                chet++;
            }
        }
    }

    cout << ncht - chet;
}
