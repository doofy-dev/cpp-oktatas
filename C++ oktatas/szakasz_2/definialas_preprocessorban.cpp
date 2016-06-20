#include <iostream>

/*
	Ez az érték nem tartalmaz típust.
	Lényege hogy nem kell mindenhova beírni a megegyezõ tartalmat. Ennek segítségével a fordító beilleszti nekünk a megfelelõ helyre.
	Ez tartalmazhat bármit, akár függvényt is!
*/

//Szám példa
#define KONSTANS_SZAM 30
//Szöveg példa
#define KONSTANS_SZOVEG "almafa"
//Függvény példa
#define LOG(szoveg) std::cout<<szoveg<<std::endl

int main() {
	int konstans_erteke = KONSTANS_SZAM; //fordítás elõtt ez átalakul "int konstans_erteke = 30;"-ra
	std::string szoveg = KONSTANS_SZOVEG; //fordítás elõtt ez átalakul "std::string szoveg = "almafa";"-ra

	LOG("valami");
}