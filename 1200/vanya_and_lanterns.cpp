#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

int main() {
	int n, l;

	std::cin >> n >> l;
	std::vector<int> lanterns;

	for(int i = 0; i < n; i++) {
		int c;
		std::cin >> c;
		lanterns.push_back(c);
	}

	std::sort(lanterns.begin(), lanterns.end());

	int max_distance = 0;

	for(std::vector<int>::iterator it = lanterns.begin() + 1; it != lanterns.end(); it++) {
		int dist = *it - *(it-1);
		max_distance = dist > max_distance ? dist : max_distance;
	}

	int left_distance = 2 * lanterns.front();
	int right_distance = 2 * (l - lanterns.back());

	if (left_distance > max_distance){
		max_distance = left_distance;
	}

	if (right_distance > max_distance) {
		max_distance = right_distance;
	}

	double r = max_distance / 2.0;

	std::cout << std::fixed << std::setprecision(10) << r;
}
