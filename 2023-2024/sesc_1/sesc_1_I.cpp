#include <iostream>

using namespace std;


int main() {
    long long n, m, k, one_roll_for;

    cin >> n >> m >> k;


    one_roll_for = k / n;


    cout << (m + one_roll_for - 1) / one_roll_for;
}