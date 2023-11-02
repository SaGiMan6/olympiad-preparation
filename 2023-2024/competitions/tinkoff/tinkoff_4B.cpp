#include <iostream>
#include <algorithm>
#include <vector>


int main() {
    int n;
    std::cin >> n;

    std::vector <std::pair <int, int>> points(n);
    for (int i = 0; i < n; i++) {
        std::cin >> points[i].first;
        std::cin >> points[i].second;
    }

    std::sort(points.begin(), points.end());


    bool not_end = true;
    int counter = 0;
    while (not_end) {
        not_end = false;
        std::vector <std::pair <int, int>> temp_points;

        int len = points.size();
        for (int i = 0; i < len - 1; i++) {
            if (points[i].second == points[i + 1].second) {
                    temp_points.push_back(points[i]);
            } else {
                not_end = true;
            }
        }
        if (points[len - 1].second == points[len - 2].second) {
            temp_points.push_back(points[len - 1]);
        }

        if (not_end) {
            counter++;
            points = temp_points;
            temp_points.clear();
        }
    }

    if (points.empty()) {
        std::cout << "Draw " << counter;
    } else {
        if (points[0].second == 0) {
            std::cout << "White " << counter;
        } else {
            std::cout << "Black " << counter;
        }
    }
}
