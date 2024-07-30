#include <cstdint>
#include <iostream>
#include <vector>
#include <ranges>
int main(void) {
	int n;
	std::cin >> n;
	std::vector<int> arr(n);
	for(int i = 0; i < n; i++){
		std::cin >> arr[i];
	}
	uint64_t moves = 0;
	for(int i = 1; i < n; i++){
		if (arr[i-1] > arr[i]) 
		{
			moves += arr[i-1] - arr[i];
			arr[i] = arr[i-1];
		}
	}
	std::cout << moves;
}
