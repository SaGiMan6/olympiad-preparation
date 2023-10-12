#include <iostream>
#include <cmath>


int min(int a, int b) {
    int c = ((a + b - std::abs(a - b)) / 2);
    return c;
}

int main() {
    int x;
    std::cin >> x;

    std::cout << ((min(1, std::abs((x % 10) - (x / 1000))) + 1) % 2) * ((min(1, std::abs(((x / 100) % 10) - ((x % 100) / 10))) + 1) % 2);
}
