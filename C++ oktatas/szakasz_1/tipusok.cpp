#include <iostream>

int main() {

	//�gy n�z ki egy egy soros megjegyz�s, ha a ezt a t�pust haszn�ljuk a k�t per jel ut�n l�v� sz�veg megjegyz�s lesz

	/*
		Ilyen egy t�bb soros megjegyz�s.
		Ha nagyobb sz�veget akarsz megjegyz�sbe �rni ezt aj�nlott haszn�lni.
	*/


	//Sz�mok
	int egesz_szam = 10;
	long nagy_szam = 4423132343;
	float tort_szam = 1202.012f;
	double tort_nagy_szam = 102013.23;
	unsigned int pozitiv_egesz_szam = 2102102;
	//stb...

	//Logikai t�pus
	bool logikai_valtozo = true;
	
	//Karakter �s sz�veg
	char karakter = 'a';
	std::string szoveg = "Ez egy sz�veg";

	//T�mb�k
	char karakter_tomb[7] = "asdasd"; // egy sz�mmal nagyobb t�mb kell, mert a sz�veg v�g�n mindig szerepel egy \0 karater
	char masik_karakter_tomb[5] = { 'a','c','y','g','d' }; //enn�l nem kell egyel nagyobb sz�mot megadni mert felsorolod mit tartalmaz
	int szam_tomb[5] = { 1, 2, 4, 56, 12 };

	return 0;
}