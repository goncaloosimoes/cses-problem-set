#include <iostream>
#include <assert.h>
#include <unordered_map>

int main() {
	// array size
	int n;
	std::cin >> n;
	
	// target sum
	int target;
	std::cin >> target;
	std::unordered_map<int, int> seen;

	// array of ints
	//int numbers[n];
	for (int i = 0; i < n; i++) {
		int num;
		std::cin >> num;

		int complement = target - num;
		if (seen.count(complement)) {
			std::cout << seen[complement] + 1 << " " << i+1 << std::endl;
			return 0;
		}
		seen[num] = i;
	}
	std::cout << "IMPOSSIBLE" << std::endl;
	return 0;
}
