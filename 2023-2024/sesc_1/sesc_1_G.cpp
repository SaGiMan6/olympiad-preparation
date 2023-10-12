#include <iostream>


int main() {
    int a, b;

    std::cin >> a >> b;

    std::cout << ((a % b) * (b % a)) + 1;

    return 0;
}
