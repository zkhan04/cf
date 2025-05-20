#include <iostream>
#include <unordered_set>
#include <string.h>

int main() {
	std::unordered_set<char> name_chars;

	char s[101];

	std::cin >> s;

	for (size_t i = 0; i < strlen(s); i++) {
		name_chars.insert(s[i]);		
	}	

	std::cout << (name_chars.size() & 1 ? "IGNORE HIM!" : "CHAT WITH HER!");

}
