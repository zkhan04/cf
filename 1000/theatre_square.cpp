#include <iostream>

int main() {
	long long n, m, a;

	std::cin >> n >> m >> a;

	// codeforces stop tweaking bruh
	// fun fact: long is 32 bits on codeforces!
	// so 'long long' is necessary as it is 64 bits
	// on all machines.
	long long x_tiles = (n + a - 1) / a;
	long long y_tiles = (m + a - 1) / a;
	long long total = x_tiles * y_tiles;

	std::cout << total; 
}
