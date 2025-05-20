#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int n;
	std::cin >> n;

	std::vector<int> coins;
	int sum = 0;

	for(int i = 0; i < n; i++) {
		int c;
		std::cin >> c;
		coins.push_back(c);
		sum += c;
	}

	std::sort(coins.begin(), coins.end());

	std::vector<int>::reverse_iterator it = coins.rbegin();
	
	int csum = 0;
	int coins_needed = 0;

	while(csum < sum / 2 + 1) {
		csum += *it;
		it++;
		coins_needed++;
	}

	std::cout << coins_needed;
}
