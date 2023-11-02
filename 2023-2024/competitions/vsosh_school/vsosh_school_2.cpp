#include <iostream>


int main() {
    long long x, y, s, b;

    std::cin >> x >> y;


    s = (x + 1) / (x - y);
    b = (y * s) + 1;


    std::cout << b << std::endl << s;
}
