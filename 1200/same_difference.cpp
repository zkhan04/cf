#include <iostream>
#include <unordered_map>

int main() {
	int t;
	std::cin >> t;

	for(int q = 0; q < t; q++) {
		int n;
		std::cin >> n;
		std::unordered_map<long long, long long> map;

		for(int i = 0; i < n; i++) {
			int a;
			std::cin >> a;
			long long key = (long long)(a - i);
			map[key]++;
		}

		long long count = 0;

		for (auto& [_, group_size] : map) {
			count += (group_size * (group_size - 1)) / 2;
		}

		std::cout << count << std::endl;
	}
}
