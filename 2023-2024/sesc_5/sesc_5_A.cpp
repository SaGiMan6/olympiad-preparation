#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int i = 0, j = 0, sum = 0, max_books = 0;
    while (j < n) {
        sum += a[j];
        while (sum > t) {
            sum -= a[i];
            i++;
        }

        max_books = max(max_books, j - i + 1);
        j++;
    }

    cout << max_books << "\n";
    return 0;
}