#include <iostream>


class Alma {
public:
	int tomeg;
	char* tipus;
	//Ez a konstruktor
	Alma::Alma(int tomeg, char* tipus) {
		this->tomeg = tomeg;
		this->tipus = tipus;
	}
	//Ez a destruktor
	Alma::~Alma() {
		delete tipus;
	}
};

int main() {
	Alma a(1, "zold");
	std::cout << "Az alma tipusa: " << a.tipus << ", tomege " << a.tomeg << std::endl;
	return 0;
}