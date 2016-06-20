#include <iostream>


struct Alma {
	int tomeg;
	char* tipus;
	Alma::Alma(int tomeg, char* tipus) {
		this->tomeg = tomeg;
		this->tipus = tipus;
	}
};

int main() {
	Alma a(1, "zold");
	std::cout << "Az alma tipusa: " << a.tipus << ", tomege " << a.tomeg << std::endl;
	return 0;
}