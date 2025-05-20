#include <iostream>

int main() {
	int n;

	std::cin >> n;
	char op[4];
	int x = 0;
	
	for (int i = 0; i < n; i++) {
		std::cin >> op;
		if (op[1] == '+')
			x++;
		else
			x--;
	}

	std::cout << x;
}
