#include <iostream>
#include <string>
#include <stack>
#include <utility>
#include <vector>


std::pair<std::stack<int>, std::stack<int>> out_of_stock(std::pair<std::stack<int>, std::stack<int>> not_rev) {
    std::pair<std::stack<int>, std::stack<int>> rev;

    rev.first.push(not_rev.first.top());
    rev.second.push(not_rev.first.top());
    not_rev.first.pop();
    not_rev.second.pop();

    if (!not_rev.first.empty()) {
        for (int i = 0; i < not_rev.first.size() - 1; i++) {
            rev.first.push(not_rev.first.top());
            rev.second.push(std::min(rev.first.top(), rev.second.top()));
            not_rev.first.pop();
            not_rev.second.pop();
        }
    }

    return rev;
}

std::pair<std::stack<int>, std::stack<int>> clear_stack(std::pair<std::stack<int>, std::stack<int>> stack_to_clear) {
    do {
        stack_to_clear.first.pop();
        stack_to_clear.second.pop();
    } while (!stack_to_clear.first.empty());

    return stack_to_clear;
}


int main() {
    int m;
    std::cin >> m;

    std::pair<std::stack<int>, std::stack<int>> in_stack, out_stack;
    std::string command;
    std::vector<std::string> answers;

    for (int i = 0; i < m; i++) {
        std::cin >> command;

        if (command == "enqueue") {
            int enq;
            std::cin >> enq;

            in_stack.first.push(enq);
            if (in_stack.second.empty()) {
                in_stack.second.push(enq);
            } else {
                in_stack.second.push(std::min(in_stack.second.top(), enq));
            }

            answers.emplace_back("ok");
        } else if (command == "front") {
            if (out_stack.first.empty() and in_stack.first.empty()) {
                answers.emplace_back("error");
            } else {
                if (out_stack.first.empty()) {
                    out_stack = out_of_stock(in_stack);
                    in_stack = clear_stack(in_stack);
                }
                answers.emplace_back(std::to_string(out_stack.first.top()));
            }
        } else if (command == "dequeue") {
            if (out_stack.first.empty() and in_stack.first.empty()) {
                answers.emplace_back("error");
            } else {
                if (out_stack.first.empty()) {
                    out_stack = out_of_stock(in_stack);
                    in_stack = clear_stack(in_stack);
                }
                answers.emplace_back(std::to_string(out_stack.first.top()));
                out_stack.first.pop();
                out_stack.second.pop();
            }
        } else if (command == "size") {
            answers.emplace_back(std::to_string(out_stack.first.size() + in_stack.first.size()));
        } else if (command == "clear") {
            in_stack = clear_stack(in_stack);
            out_stack = clear_stack(out_stack);
            answers.emplace_back("ok");
        } else if (command == "min") {
            if (out_stack.second.empty() and in_stack.second.empty()) {
                answers.emplace_back("error");
            } else if (in_stack.second.empty()) {
                answers.emplace_back(std::to_string(out_stack.second.top()));
            } else if (out_stack.second.empty()) {
                answers.emplace_back(std::to_string(in_stack.second.top()));
            } else {
                answers.emplace_back(std::to_string(std::min(in_stack.second.top(), out_stack.second.top())));
            }
        }
    }

    for (int i = 0; i < answers.size(); i++) {
        std::cout << answers[i] << std::endl;
    }
}