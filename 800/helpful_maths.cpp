#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>

int main() {
	std::vector<int> nums;
	char s[101];

	std::cin >> s;


	for(int i = 0; i < (int)strlen(s); i+=2) {
		nums.push_back((int)(s[i] - '0'));
	}

	std::sort(nums.begin(), nums.end());

	for(std::vector<int>::iterator it = nums.begin(); it != nums.end() - 1; it++) {
		std::cout << *it << '+';
	}

	std::cout << nums.back();
}

