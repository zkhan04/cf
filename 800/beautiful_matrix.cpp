#include <iostream>

int main() {
	int n;
	int d = 0;
	for(int i = 0; i < 25; i++) {
		std::cin >> n;
		if(n) {
			int r = i / 5;
			int c = i % 5;
			int dr = r-2;
			int dc = c-2;
			dr = dr >= 0 ? dr : -dr;
			dc = dc >= 0 ? dc : -dc;
			d = dr + dc;
		}

	}

	std::cout << d;
}

