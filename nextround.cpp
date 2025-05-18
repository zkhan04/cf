#include <iostream>

int main() {
	int n, k;

	std::cin >> n >> k;

	int count = 0;
	int curr;

	for(int i = 0; i < k; i++) {
		std::cin >> curr;
		if(!curr) {
			std::cout << count;
			return 0;
		}
		count++;
	}

	int kth = curr;

	for (int i = k; i < n; i++) {
		std::cin >> curr;
		if (curr != kth) {
			std::cout << count;
			return 0;
		}
		count++;
	}

	std::cout << n;
}
