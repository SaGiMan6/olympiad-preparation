#include <iostream>
#include <vector>


int main() {
    long long n, p, sum_1 = 0, sum_2 = 0, res;
    std::vector<long long> a;


    std::cin >> n;

    for (int i = 0; i < n; i++) {
        long long temp;
        std::cin >> temp;

        a.push_back(temp);

        sum_1 += temp;
        sum_2 += temp * (n - (i + 1));
    }

    std::cin >> p;


    res = (p - sum_1) / sum_2;

    std::cout << res;
}