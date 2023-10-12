#include <iostream>
#include <algorithm>


int main () {
    int k;
    int a, b;
    int x, y;

    std::cin >> k;
    std::cin >> a >> x;
    std::cin >> b >> y;

    std::cout << std::max({((k - a) * x) + ((k - a - b) * y), ((k - b) * y) + ((k - b - a) * x), ((k - a) * x), ((k - b) * y), 0});

    return 0;
}
