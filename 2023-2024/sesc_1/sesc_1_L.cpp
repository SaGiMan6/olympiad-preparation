// Not solved (WA #6)

#include <iostream>

using namespace std;


int main() {
    long long n, res_1 = 3, res_2 = 7;

    cin >> n;


    for (int i = 1; i < 3 * n; i++){
        res_1 *= 3;
    }
    for (int i = 1; i < n; i++){
        res_2 *= 7;
    }


    cout << res_1 - res_2;
}