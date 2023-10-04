#include <iostream>


int main() {
    int n, k;

    std::cin >> n;
    std::cin >> k;

    if (k % n != 0) {
        std::cout << n - (k % n);
    } else {
        std::cout << 0;
    }
}
