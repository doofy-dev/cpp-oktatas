#include <math.h>

int main() {
	int a = 2;
	int b = 3;

	//Csak a leggyakrabban használt matematikai képletek vannak bemutatva

	//Érték: 5
	int osszeadas = a + b;

	//Érték: -1
	int kivonas = a - b;

	//Érték: 6
	int szorzas = a*b;

	//Érték: 0.66666666666
	//Tekintve hogy tudjuk hogy az eredmény tört szám lesz, tört típusba kell menteni
	//Ahhoz hogy jó eredményt kapjunk, legalább az egyik változót tört számmá kell alakítani, ezt úgy tudjuk hogy elé írjuk a (float) szöveget
	float osztas = (float)a / b;

	//A lentiekhez szükséges a fájl elsõ sorában látható #include <math.h>

	//négyzetgyök
	//Érték: 1.4142135623
	//A gyök függvény mindig double típusú eredményt ad
	double gyok = sqrt(a);

	//az a szám b-edik hatványa
	//Érték: 8
	//A hatvány függvény mindig double típusú eredményt ad
	double hatvany = pow(a, b);

	return 0;
}