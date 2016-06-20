#include <iostream>

int main() {
	std::cout << "Osszead " << osszead(2, 4) << std::endl;
	std::cout << "Szorzas" << osztas(2, 4) << std::endl;
	return 0;
}

int osszead(int a, int b) {
	return a + b;
}

float osztas(int a, int b) {
	return (float)a / b;
}