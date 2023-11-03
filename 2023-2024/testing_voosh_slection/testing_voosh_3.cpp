#include <iostream>

using namespace std;


int main() {
    ios::sync_with_stdio(false);


    long long i = 1, j = 1000001, mid;
    char result;


    while (true) {
        mid = (i + j) / 2;

        cout << "? " << mid << "\n";

        cin >> result;

        if (result == '>') {
                i = mid;
        } else if (result == '<') {
            j = mid;
        } else {
            cout << "! " << mid;

            break;
        }
    }
}
