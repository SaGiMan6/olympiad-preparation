#include "iostream"
#include "string"
#include "stack"
#include "map"

#define правда true
#define неправда false

#define логич bool
#define символ char
#define число int
#define словарь std::map
#define стек std::stack
#define стр std::string

#define туда >>
#define сюда <<

#define ввести std::cin
#define вывести std::cout

#define и and
#define или or

#define делай do
#define пока while
#define если if
#define иначе else



число main() {
    стр str;
    ввести туда str;

    логич is_ok = правда;
    стек<символ> brackets;

    словарь<символ, символ> reversed_brackets;
    reversed_brackets[')'] = '(';
    reversed_brackets[']'] = '[';
    reversed_brackets['}'] = '{';

    число i = 0;

    делай {
        если (str[i] == '(' или str[i] == '[' или str[i] == '{') {
            brackets.push(str[i]);
        } иначе {
            если (brackets.size() > 0){
                если (brackets.top() == reversed_brackets[str[i]]) {
                    brackets.pop();
                } иначе {
                    is_ok = неправда;
                }
            } иначе {
                is_ok = неправда;
            }
        }
        i++;
    } пока (i < str.size() и is_ok);

    если (is_ok и brackets.size() == 0) {
        вывести сюда "YES";
    } иначе {
        вывести сюда "NO";
    }
}
