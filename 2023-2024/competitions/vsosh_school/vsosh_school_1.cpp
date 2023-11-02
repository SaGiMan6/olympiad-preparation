#include <iostream>


int main() {
    long long x, y, a, b;

    std::cin >> x >> y;


    if (x == 0) {
        a = 1;
    } else {
        a = x * 2;
    }

    if (y == 0) {
        b = 1;
    } else {
        b = y + 1;
    }


    std::cout << (a * b);
}
