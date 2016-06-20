
int main() {
	bool mehet = false;
	int szamlalo = 0;


	/*
		A while ciklus el�sz�r megn�zi hogy teljes�lt-e a felt�tel.
		Ha igen, lefuttatja a tartalmat �s mindezt addig ism�tli amig a felt�tel hamis lesz.
		Ha nem teljes�l a felt�tel, kil�p a ciklusb�l.
		Ez a ciklus el�bb n�zi a felt�telt �s csak ut�na futtatja a tartalmat.
	*/
	while (!mehet) {
		szamlalo++;
		if (szamlalo == 10) {
			mehet = true;
		}
	}

	/*
		A do-while ciklus lefuttatja a tartalmat, majd megn�zi a felt�tel teljes�l�s�t.
		Ha nem teljes�l a felt�tel, kil�p a ciklusb�l.
		Ez a ciklus el�bb futtatja a tartalmat, majd n�zi a felt�telt.
	*/
	do {
		szamlalo--;
		if (szamlalo == 0) {
			mehet = false;
		}
	} while (mehet);


	/*
		A for ciklus meghat�rozott ism�tl�d�s� (a lenti p�ld�ul 10-szer ism�tli a tartalmat majd kil�p.
		A param�terben l�v� sz�m (i) az aktu�lis sz�mot mutatja. 
		A lentiben speciel indul�skor az i �rt�ke nulla, majd minden egyes ciklusban egyel nagyobb, eg�szen am�g el nem �ri a 10-et.
		FIGYELEM: amikor el�ri a 10-et azonnal kil�p, az utols� haszn�lhat� �rt�ke az i-nek a 9!
	*/
	for (int i = 0; i < 10; i++) {

	}

}