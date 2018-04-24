#include <iostream>

#define MAXSIZE 64

int main() {
    bool a[MAXSIZE], b[MAXSIZE];
    bool *current = a, *next = b;

    int rows = 0;
    std::cin >> rows;

    current[0] = true;
    next[0] = true;
    for (int i = 1; i < MAXSIZE; ++i) {
        current[i] = next[i] = false;
    }

    for (int i = 1; i <= rows; ++i) {
        for (int j = 0; j < i; ++j) {
            std::cout << (current[j] ? '*' : ' ');
        }
        for (int j = 1; j <= i && j < MAXSIZE; ++j) {
            next[j] = current[j] ^ current[j - 1];
        }
        std::cout << '\n';

        bool *x = current;
        current = next;
        next = x;
    }
}
