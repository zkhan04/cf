#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int count = 0;

	int p, v, t;

	for (int i = 0; i < n; i++) {
		std::cin >> p >> v >> t;
		count += (p + v + t >= 2);
	}

	std::cout << count;
}
