#include <iostream>
#include <stack>
#include <utility>
#include <queue>


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    long t, n;
    std::cin >> t >> n;

    std::pair<std::stack<long>, std::stack<long>> plate;
    std::queue<long> results;

    for (int i = 0; i < t; ++i) {
        int command;
        std::cin >> command;

        switch (command) {
            case 1:
                long new_pancake;
                std::cin >> new_pancake;

                if (plate.first.empty()) {
                    plate.first.push(new_pancake);
                    plate.second.push(new_pancake);
                    break;
                }

                plate.first.push(new_pancake);
                plate.second.push(std::min(new_pancake, plate.second.top()));
                break;
            case 2:
                plate.first.pop();
                plate.second.pop();
                break;
            default:
                results.push(plate.second.top());
        }
    }

    size_t resSize = results.size();

    for (int i = 0; i < resSize; ++i) {
        std::cout << results.front() << "\n";
        results.pop();
    }

    return 0;
}