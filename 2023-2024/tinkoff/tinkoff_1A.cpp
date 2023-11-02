#include <iostream>

int main() {
	int x, y;

	std::cin >> x;
	std::cin >> y;

	if (x != 0) {
		x = 12 - x;
	}

	if (y != 0) {
		y = 60 - y;
	}

	std::cout << x << " " << y;
}