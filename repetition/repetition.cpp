#include <algorithm>
#include <iostream>
int main(void) {
	std::string sequence; 
	std::cin >> sequence;
	char last = '0';
	int max = 0;
	int curr_count = 0;
	std::for_each(sequence.begin(), sequence.end(), [&last, &max, &curr_count](char c){
		if (c == last) {
			curr_count += 1;
		} else {
			last = c;
			curr_count = 1;
		}
		max = std::max(curr_count, max);
	});
	std::cout << max;
}
