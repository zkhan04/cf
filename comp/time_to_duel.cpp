#include <iostream>

int main() {
	int n_tests;

	std::cin >> n_tests;

	for(int t = 0; t < n_tests; t++) {
		int n_players;
		std::cin >> n_players;

		int prev = 2;
		int curr;

		std::cin >> curr;

		bool valid = true;
		int count = curr;

		for(int a = 0; a < n_players - 1; a++) {
			prev = curr;
			std::cin >> curr;
			count += curr;
				
			if(!prev && !curr) {
				valid = false;
			}
		}

		if(count * 2 < n_players - 1 || count > n_players - 1) {
		       valid = false;
		}

		std::cout << (!valid ? "yes" : "no") << '\n';
	}		
}
