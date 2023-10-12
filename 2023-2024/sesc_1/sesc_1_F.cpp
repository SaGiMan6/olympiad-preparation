#include <iostream>


int min(int a, int b) {
    int c = ((a + b - std::abs(a - b)) / 2);
    return c;
}

int main() {
    int n, k;

    std::cin >> n;
    std::cin >> k;

    std::cout << (n - (k % n)) * min(1, k % n);
}
