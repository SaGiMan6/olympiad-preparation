#include "iostream"
#include "string"

int main() {
    long long l = 1, r;
    std::cin >> r;
    r = r + 1;

    long long mid;
    std::string str;

    while (r - l > 1) {
        mid = (l + r + 1) / 2;

        std::cout << "? " << mid << std::endl;
        std::flush(std::cout);
        std::cin >> str;

        if (str[0] == '>') {
            l = mid;
        } else {
            r = mid;
        }

    }
    std::cout << "! " << l;
}