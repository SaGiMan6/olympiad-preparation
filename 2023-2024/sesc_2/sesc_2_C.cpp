#include <iostream>
#include <queue>
#include <utility>

std::pair<std::queue<int>, std::queue<int>> first_win(std::pair<std::queue<int>, std::queue<int>> par) {
    par.first.push(par.first.front());
    par.first.push(par.second.front());
    par.first.pop();
    par.second.pop();

    return par;
}

std::pair<std::queue<int>, std::queue<int>> second_win(std::pair<std::queue<int>, std::queue<int>> par) {
    par.second.push(par.first.front());
    par.second.push(par.second.front());
    par.first.pop();
    par.second.pop();

    return par;
}

int main() {
    std::queue<int> empty_deck[2];
    std::pair<std::queue<int>, std::queue<int>> deck;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            int x;
            std::cin >> x;
            empty_deck[i].push(x);
        }
    }

    deck.first = empty_deck[0];
    deck.second = empty_deck[1];
    int counter = 0;

    do {
        if ((deck.first.front() > deck.second.front() or (deck.first.front() == 0 and deck.second.front() == 9)) and (deck.first.front() != 9 and deck.second.front() != 0)) {
            deck = first_win(deck);
        } else {
            deck = second_win(deck);
        }

        counter++;
    } while (!deck.first.empty() and !deck.second.empty());

    if (deck.first.empty()) {
        std::cout << "second " << counter;
    } else {
        std::cout << "first " << counter;
    }
}