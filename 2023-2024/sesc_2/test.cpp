#include <iostream>
#include <unordered_map>

using namespace std;


int main() {
    unordered_map<long long, long long> numbers;
    long long x = 1;

    // Ввод значения в hash map
    numbers[x] = 1;

    // Вывод из hash map
    cout << numbers[x];

    // Указать размер hash map
    numbers.reserve(300);

    // Если такой эл. есть, возвращает 1, если нет, 0
    numbers.count(x);
}
