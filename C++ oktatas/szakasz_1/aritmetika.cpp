#include <math.h>

int main() {
	int a = 2;
	int b = 3;

	//Csak a leggyakrabban haszn�lt matematikai k�pletek vannak bemutatva

	//�rt�k: 5
	int osszeadas = a + b;

	//�rt�k: -1
	int kivonas = a - b;

	//�rt�k: 6
	int szorzas = a*b;

	//�rt�k: 0.66666666666
	//Tekintve hogy tudjuk hogy az eredm�ny t�rt sz�m lesz, t�rt t�pusba kell menteni
	//Ahhoz hogy j� eredm�nyt kapjunk, legal�bb az egyik v�ltoz�t t�rt sz�mm� kell alak�tani, ezt �gy tudjuk hogy el� �rjuk a (float) sz�veget
	float osztas = (float)a / b;

	//A lentiekhez sz�ks�ges a f�jl els� sor�ban l�that� #include <math.h>

	//n�gyzetgy�k
	//�rt�k: 1.4142135623
	//A gy�k f�ggv�ny mindig double t�pus� eredm�nyt ad
	double gyok = sqrt(a);

	//az a sz�m b-edik hatv�nya
	//�rt�k: 8
	//A hatv�ny f�ggv�ny mindig double t�pus� eredm�nyt ad
	double hatvany = pow(a, b);

	return 0;
}