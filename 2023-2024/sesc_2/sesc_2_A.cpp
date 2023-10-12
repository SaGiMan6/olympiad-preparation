#include "iostream"
#include "string"

int main() {
    std::string str;
    std::cin >> str;

    int op_char = 0, cl_char = 0;
    bool is_ok = true;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '(') {
            op_char++;
        } else {
            cl_char++;
        }
        if (cl_char > op_char) {
            is_ok = false;
        }
    }

    if (op_char == cl_char and is_ok) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
}
