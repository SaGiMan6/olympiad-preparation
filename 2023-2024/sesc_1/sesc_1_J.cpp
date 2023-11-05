#include <iostream>

using namespace std;


int main () {
    long long k;
    long long a, b;
    long long x, y;
    long long res_1, res_2;

    std::cin >> k;
    std::cin >> a >> x;
    std::cin >> b >> y;


    if ((k - (a + b)) > 0) {
        res_1 = ((k - a) * x) + ((k - (a + b)) * y);
        res_2 = ((k - b) * y) + ((k - (a + b)) * x);
    } else if (((k - a) > 0) or ((k - b) > 0)) {
        res_1 = ((k - a) * x);
        res_2 = ((k - b) * y);
    } else {
        res_1 = 0;
        res_2 = 0;
    }


    if (res_1 >= res_2) {
        cout << res_1;
    } else {
        cout << res_2;
    }

    return 0;
}
