#include <iostream>

int main() {
	char prev;
	char curr;
	std::cin >> prev;

	bool d = false;
	int c = 1;

	while(std::cin.get(curr)) {
		if (curr == prev) {
			c++;
			if (c >= 7) {
				d = true;
			}
		} else {
			c = 1;
		}
		prev = curr;
	}

	std::cout << (d ? "YES" : "NO");
}
