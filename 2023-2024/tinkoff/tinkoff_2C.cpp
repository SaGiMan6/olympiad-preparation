#include <iostream>

int main() {
    unsigned long long n;
    std::cin >> n;


    int m;
    m = n % 6;


    switch (m) {
        case 0:
            std::cout << "RGB";
            break;
        case 1:
            std::cout << "GRB";
            break;
        case 2:
            std::cout << "GBR";
            break;
        case 3:
            std::cout << "BGR";
            break;
        case 4:
            std::cout << "BRG";
            break;
        case 5:
            std::cout << "RBG";
            break;
    }
}