#include <iostream>


int main() {
    int x;
    std::cin >> x;

    std::cout << (1 - (x / 1000) % (x % 10)) * (1 - ((x / 100) % 10) % ((x % 100) / 10));

//    if ((x / 1000) == (x % 10) and ((x / 100) % 10) == (x % 100) / 10) {
//        std::cout << 1;
//    } else {
//        std::cout << 0;
//    }
}
