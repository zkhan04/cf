#include <iostream>

int main() {
	int k, n, w;

	std::cin >> k >> n >> w;

	int total = (k * w * (w+1)) / 2;

	std::cout << (total > n ? total - n : 0);
}
