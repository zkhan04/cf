#include <iostream>

int main() {
	int n, k, t;
	std::cin >> t;

	for(int l = 0; l < t; l++) {
		std::cin >> n >> k;

		std::cout << ((k - 1) / (n - 1)) * n + (k - 1) % (n - 1) + 1 << '\n';
	}
}
