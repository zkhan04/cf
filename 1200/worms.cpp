#include <iostream>
#include <stdlib.h>


int main() {
	int n;
	std::cin >> n;

	int sum = 0;
	int *indices = (int *)malloc(n * sizeof(int) + 1);

	for(int i = 0; i < n; i++) {
		indices[i] = sum + 1;
		int a;
		std::cin >> a;
		sum += a;
	}

	int m;
	std::cin >> m;

	for(int i = 0; i < m; i++) {
		int w;
		std::cin >> w;

		int left = 0;
		int right = n-1;
		int mid;

		while(left <= right) {
			mid = (left + right) / 2;
			if (indices[mid] <= w) {
				left = mid + 1;
			} else {
				right = mid - 1;
			}
		}

		std::cout << right + 1 << '\n';
	}
}


