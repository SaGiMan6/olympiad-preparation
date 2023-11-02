#include <iostream>


long long rec(long long x, long long  y) {
    return ((((x * x) + x) * ((y * y) + y)) / 4);
}


int main() {
    long long n, m, x, y, ans;

    std::cin >> n >> m >> x >> y;


    ans = rec(x - 1, m) + rec(n - x, m) + rec(n, y - 1) + rec(n, m - y) - rec(x - 1, y - 1) - rec(n - x, y - 1) - rec(x - 1, m - y) - rec(n - x, m - y);


    std::cout << ans;
}
