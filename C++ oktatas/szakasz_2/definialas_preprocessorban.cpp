#include <iostream>

/*
	Ez az �rt�k nem tartalmaz t�pust.
	L�nyege hogy nem kell mindenhova be�rni a megegyez� tartalmat. Ennek seg�ts�g�vel a ford�t� beilleszti nek�nk a megfelel� helyre.
	Ez tartalmazhat b�rmit, ak�r f�ggv�nyt is!
*/

//Sz�m p�lda
#define KONSTANS_SZAM 30
//Sz�veg p�lda
#define KONSTANS_SZOVEG "almafa"
//F�ggv�ny p�lda
#define LOG(szoveg) std::cout<<szoveg<<std::endl

int main() {
	int konstans_erteke = KONSTANS_SZAM; //ford�t�s el�tt ez �talakul "int konstans_erteke = 30;"-ra
	std::string szoveg = KONSTANS_SZOVEG; //ford�t�s el�tt ez �talakul "std::string szoveg = "almafa";"-ra

	LOG("valami");
}