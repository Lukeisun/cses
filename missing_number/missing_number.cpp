
#include <algorithm>
#include <iostream>
#include <vector>
int main(void) {
	int n;
	std::cin >> n;
	std::vector<bool> arr(n, false);
	int temp;
	while (std::cin >> temp) {
		arr[temp-1] = true;
	}
	auto s = std::find(arr.begin(), arr.end(), false) ;
	auto x = std::distance(arr.begin(), s);
	std::cout << x+1 << std::endl;
}
