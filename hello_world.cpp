#include <iostream>
#include <string>

int main() {
	std::string name;
	std::cout << "Enter your name, please: "; // пользователь вводит свое имя
	std::cin >> name;
	std::cout << "Hello world from " << name << "!" << std::endl;
	return 0;
}
