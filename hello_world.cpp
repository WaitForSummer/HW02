#include <iostream>
#include <string>

int main() {
	std::string name;
	std::cout << "Enter your name, please: "; // user enter its name
	std::cin >> name;
	std::cout << "Hello world from " << name << "!" << std::endl;
	return 0;
}
