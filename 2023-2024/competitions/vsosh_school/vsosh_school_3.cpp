#include <iostream>


int main() {
    long long n, k, res;

    std::cin >> n >> k;


    if (k == n) {
        res = 3;
    } else if (k == (n * 2)) {
        res = 6;
    } else if (k < n) {
        res = 4;
    } else {
        res = 5;
    }


    std::cout << res;
}
