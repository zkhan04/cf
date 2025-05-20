#include <iostream>


int p2(int n) {
	int k = 1;
	int pow = 0;
	while(k < n) {
		pow++;
		k<<=1;
	}
	return pow;
}

int main() {
	int n_tests;
	std::cin >> n_tests;

	for(int k = 0; k < n_tests; k++) {
		int n, m, a, b;
		std::cin >> n >> m >> a >> b;

		// remaining moves to eliminate along the m and n dimensions
		int rm = p2(m);
		int rn = p2(n);

		// 22, 11
		// if == 11, then potential sizes are 11 or 12
		// if == 12, potential sizes are 12 or 11
		
		// 23, 11
		// if == 11, potential sizes are 11, 13
		// if == 12, potential sizes are 12, 12
		// if == 13, potential sizes are 13, 11
		//

		int pn = a <= ((n+1) >> 1) ? a : n - a + 1;
		int pm = b <= ((m+1) >> 1) ? b : m - b + 1;

		if(rm - p2(pm) > rn - p2(pn)) {
			m = pm;
		} else {
			n = pn;
		}

		std::cout << (1 + p2(m) + p2(n)) << '\n';

		

		// find the smallest power of 2 >= n?
		// how long does it take for 7?
		// m moves to middle -> 4 remain
		// 4 -> 2 -> 1 so 3 moves
		// 8 -> 4 -> 2 -> 1
		// 9 -> 5 -> 3 -> 2 -> 1
	}
}
