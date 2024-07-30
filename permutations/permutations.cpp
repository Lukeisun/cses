#include <algorithm>
#include <functional>
#include <iostream>
#include <numeric>
#include <utility>
#include <vector>
void permute(std::vector<int> vec) {}
int main(void) {
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    if (n == 1) {
        std::cout << 1;
        return 0;
    } else if (n == 2 || n == 3) {
        std::cout << "NO SOLUTION";
        return 0;
    }
    std::iota(vec.begin(), vec.end(), 1);
    auto lam = [](int i) { return i % 2 == 0; };
    std::stable_partition(vec.begin(), vec.end(), lam);
    for (auto v : vec) {
        std::cout << v << " ";
    }
}
