#include <cstdint>
#include <iostream>
#include <ostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        uint64_t row;
        uint64_t col;
        std::cin >> row;
        std::cin >> col;
        // if (row % 2 == 0)  we know its less than row^2
        // else greater than row^2 + 1.
        // if row == 1
        // if (col % 2) == 1) less than col^2
        // else gt col^2+1
        if (col > row) {
            if (col % 2 == 0) {
                std::cout << (col-1)*(col-1) + row  << std::endl;
            } else {
                std::cout << col * col - row + 1 << std::endl;
            }
        } else {
            if (row % 2 == 0) {
                std::cout << row * row - col + 1 << std::endl;
            } else {
                std::cout << (row -1)*(row-1) + col << std::endl;
            }
        }
    }
}
