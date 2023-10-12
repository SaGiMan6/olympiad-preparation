#include "iostream"
#include "string"
#include "stack"
#include "map"



int main() {
    std::string str;
    std::cin >> str;

    bool is_ok = true;
    std::stack<char> brackets;

    std::map<char, char> reversed_brackets;
    reversed_brackets[')'] = '(';
    reversed_brackets[']'] = '[';
    reversed_brackets['}'] = '{';

    int i = 0;

    do {
        if (str[i] == '(' or str[i] == '[' or str[i] == '{') {
            brackets.push(str[i]);
        } else {
            if (brackets.size() > 0){
                if (brackets.top() == reversed_brackets[str[i]]) {
                    brackets.pop();
                } else {
                    is_ok = false;
                }
            } else {
                is_ok = false;
            }
        }
        i++;
    } while (i < str.size() and is_ok);

    if (is_ok and brackets.size() == 0) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
}
