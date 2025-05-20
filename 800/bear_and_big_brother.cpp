#include <iostream>

int main() {
	int l, b;

	std::cin >> l >> b;

	int years = 0;

	while(l<=b){
		l*=3;
		b*=2;
		years++;
	}

	std::cout << years;
}
