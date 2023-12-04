#include "iostream"
#include "algorithm"
#include "vector"

#define ll long long

using namespace std;


int main() {
    int n, x, y, frs_day = 1e9;
    cin >> n >> x >> y;

    vector<int> days(x + y, 0);
    for (int i = 0; i < n; ++i) {
        ll day;
        cin >> day;

        if (day < frs_day) {
            frs_day = day;
        }

        days[day % (x + y)]++;
    }

    int max = 0, temp_max = 0, frs_nls = 0, ind_max;
    bool not_met_n_n = true;
    for (int i = 0; i < x + y; ++i) {
        if (days[i] == 0) {
            if (i != 0) {
                if (days[i - 1] == 0) {
                    temp_max += 1;
                } else {
                    temp_max = 1;
                }
            } else {
                temp_max = 1;
            }

            if (temp_max > max) {
                max = temp_max;
                ind_max = i;
            }

            if (i == x + y - 1) {
                if (temp_max + frs_nls > max) {
                    max = temp_max + frs_nls;
                    ind_max = frs_nls - 1;
                }
            }

            if (not_met_n_n) {
                frs_nls = temp_max;;
            }
        } else {
            temp_max = 0;
            not_met_n_n = false;
        }
    }

    if (max < y) {
        cout << -1;
    } else {
        cout << ind_max + 1;
    }
}
