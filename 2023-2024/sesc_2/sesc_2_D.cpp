#include <iostream>
#include <stack>
#include <vector>
#include <utility>


int main() {
    long t, n;
    std::cin >> t >> n;

    std::pair<std::stack<long>, std::stack<long>> plate;
    std::vector<long> results;

    for (register int i = 0; i < t; ++i) {
        register int command;
        std::cin >> command;

        switch (command) {
            case 1:
                register long new_pancake;
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
            case 3:
                results.push_back(plate.second.top());
        }
    }

    size_t resSize = results.size();
    for (register int i = 0; i < resSize; ++i) {
        std::cout << results[i] << std::endl;
    }

    return 0;
}