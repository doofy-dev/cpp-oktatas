
int main() {
	bool mehet = false;
	int szamlalo = 0;


	/*
		A while ciklus elõször megnézi hogy teljesült-e a feltétel.
		Ha igen, lefuttatja a tartalmat és mindezt addig ismétli amig a feltétel hamis lesz.
		Ha nem teljesül a feltétel, kilép a ciklusból.
		Ez a ciklus elõbb nézi a feltételt és csak utána futtatja a tartalmat.
	*/
	while (!mehet) {
		szamlalo++;
		if (szamlalo == 10) {
			mehet = true;
		}
	}

	/*
		A do-while ciklus lefuttatja a tartalmat, majd megnézi a feltétel teljesülését.
		Ha nem teljesül a feltétel, kilép a ciklusból.
		Ez a ciklus elõbb futtatja a tartalmat, majd nézi a feltételt.
	*/
	do {
		szamlalo--;
		if (szamlalo == 0) {
			mehet = false;
		}
	} while (mehet);


	/*
		A for ciklus meghatározott ismétlõdésû (a lenti például 10-szer ismétli a tartalmat majd kilép.
		A paraméterben lévõ szám (i) az aktuális számot mutatja. 
		A lentiben speciel induláskor az i értéke nulla, majd minden egyes ciklusban egyel nagyobb, egészen amíg el nem éri a 10-et.
		FIGYELEM: amikor eléri a 10-et azonnal kilép, az utolsó használható értéke az i-nek a 9!
	*/
	for (int i = 0; i < 10; i++) {

	}

}