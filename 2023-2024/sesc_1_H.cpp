#include <iostream>


int main() {
    int x, y;

    std::cin >> x;

    if (x % 2 == 0) {
        y = x * 55 - 15;
    } else {
        y = (x / 2) * 2 * 55 + 45;
    }

    std::cout << 9 + (y / 60) << " " << y % 60;
}
