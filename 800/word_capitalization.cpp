#include <iostream>
#include <cctype>

int main() {
	char c;

	std::cin >> c;

	std::cout << (char)std::toupper(c);

	while(std::cin.get(c)){
		std::cout << c;
	}
}
