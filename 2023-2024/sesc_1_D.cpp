#include <iostream>


int main() {
    int x, y;

    std::cin >> x;

    y = ((x / 2) * 2 * 55 - 15) + ((x % 2) * 60);

    std::cout << 9 + (y / 60) << " " << y % 60;
}
