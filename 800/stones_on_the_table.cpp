#include <iostream>

int main() {
	int n;
	std::cin >> n;

	char prev = 'N';
	char curr;
	std::cin >> curr;

	int count = 0;

	for(int i = 0; i < n-1; i++) {
		prev = curr;
		std::cin >> curr;
		if(prev == curr) {
			count++;
		}
	}

	std::cout << count;
}
