#include <iostream>

using namespace std;


int main() {
    double x1, x2, x3, x4;
    double y1, y2, y3, y4;
    double k1, k2;

    cin >> x1 >> x2 >> x3 >> x4;

    k1 = x2 / x1;
    k2 = x4 / x3;

    if (k1 == k2){
        cout << "=";
    }
}
