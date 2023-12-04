#include <iostream>
#include <string>
using namespace std;


void print_b(int n, string s) {
    if (n == 0) {
        cout << s << "\n";
    } else {
        print_b(n - 1, s + "0");
        print_b(n - 1, s + "1");
    }
}


int main() {
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    print_b(n, "");

    return 0;
}