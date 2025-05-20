#include <iostream>

int main() {
	int n_tests;

	std::cin >> n_tests;

	for(int m = 0; m < n_tests; m++) {
		int x;
		std::cin >> x;
		int total = 0;

		while(x >= 10) {
			total += x - x % 10;
			x = x % 10 + x / 10;
		}

		total += x;
		std::cout << total << '\n';
	}
}
