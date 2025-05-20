#include <iostream>
#include <string.h>
#include <cctype>

int main() {
	char a0[101];
	char a1[101];

	// bruh
	std::cin >> a0;
	std::cin >> a1;

	for(int i = 0; i < strlen(a0); i++) {
		char c0 = (char)std::tolower(a0[i]);
		char c1 = (char)std::tolower(a1[i]);
		if (c0 < c1) {
			std::cout << -1;
			return 0;
		} else if (c0 > c1) {
			std::cout << 1;
			return 0;
		}
	}
	
	std::cout << 0;
}
