#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    int x = 0, y = 0;
    int dir_x = 0, dir_y = 1;
    int speed = 0;
    std::string com;
    for (int i = 0; i < n; i++) {
        std::cin >> com;
        if (com == "Fwrd" and speed == 0) {
            speed = 6;
        }
        else if (com == "Back" and speed == 0) {
            speed = -6;
        }
        else if (com == "More" and speed > 0 and speed < 30) {
            speed += 6;
        }
        else if (com == "Less" and speed > 0) {
            speed -= 6;
        }
        else if (com == "Stop") {
            speed = 0;
        }
        else if (com == "Rght" and speed == 0) {
            if (dir_x == 0) {
                dir_x = dir_y;
                dir_y = 0;
            }
            else if (dir_y == 0) {
                dir_y = dir_x * -1;
                dir_x = 0;
            }
        }
        else if (com == "Left" and speed == 0) {
            if (dir_x == 0) {
                dir_x = dir_y * -1;
                dir_y = 0;
            }
            else if (dir_y == 0) {
                dir_y = dir_x;
                dir_x = 0;
            }
        }

        x += ((speed * 1000) / 60) * dir_x;
        y += ((speed * 1000) / 60) * dir_y;
    }

    std::cout << x << " " << y << std::endl;
}