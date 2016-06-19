#include <iostream>

int main() {

	//Így néz ki egy egy soros megjegyzés, ha a ezt a típust használjuk a két per jel után lévõ szöveg megjegyzés lesz

	/*
		Ilyen egy több soros megjegyzés.
		Ha nagyobb szöveget akarsz megjegyzésbe írni ezt ajánlott használni.
	*/


	//Számok
	int egesz_szam = 10;
	long nagy_szam = 4423132343;
	float tort_szam = 1202.012f;
	double tort_nagy_szam = 102013.23;
	unsigned int pozitiv_egesz_szam = 2102102;
	//stb...

	//Logikai típus
	bool logikai_valtozo = true;
	
	//Karakter és szöveg
	char karakter = 'a';
	std::string szoveg = "Ez egy szöveg";

	//Tömbök
	char karakter_tomb[7] = "asdasd"; // egy számmal nagyobb tömb kell, mert a szöveg végén mindig szerepel egy \0 karater
	char masik_karakter_tomb[5] = { 'a','c','y','g','d' }; //ennél nem kell egyel nagyobb számot megadni mert felsorolod mit tartalmaz
	int szam_tomb[5] = { 1, 2, 4, 56, 12 };

	return 0;
}