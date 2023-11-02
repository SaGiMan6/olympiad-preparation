#include <iostream>
#include <string>

int main() {
    std::string n;
    std::cin >> n;

    if (n[0] != '-' and n[0] != '0') {
        std::cout << "-" << n;
    }
    else if (n[0] == '-') {
        int d = n.size();
        std::cout << n.substr(1, d - 1);
    }
    else {
        std::cout << n;
    }
}