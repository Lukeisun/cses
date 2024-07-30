#include <cstdint>
#include <iostream>
// Consider an algorithm that takes as input a positive integer n.
// If n is even, the algorithm divides it by two, and if n is odd, the algorithm
// multiplies it by three and adds one. The algorithm repeats this, until n is
// one. For example, the sequence for n=3 is as follows:
int main() {
  uint64_t n;
  std::cin >> n;
  std::cout << n << " ";
  while (n > 1) {
    if (n % 2 == 0) {
      n /= 2;
    } else {
      n = (n * 3) + 1;
    }
    std::cout << n << " ";
  }
  std::cout << std::endl;
  return 0;
}
