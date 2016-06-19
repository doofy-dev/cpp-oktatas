#include <iostream>

int main() {
	int a = 1;
	int b = 2;


	bool a_nagyobb = a > b;
	bool a_kisebb = a < b;

	bool a_nagyobb_egyenlo = a >= b;
	bool a_kisebb_egyenlo = a <= b;

	bool a_egyelno_b_vel = a == b;
	bool a_nem_egyenlo_b_vel = a != b;

	bool a_nem_egyenlo_b_vel_es_nagyobb_mint_b = a_nem_egyenlo_b_vel && a_nagyobb; //vagy: bool a_nem_egyenlo_b_vel_es_nagyobb_mint_b = a != b && a > b;
	bool a_nem_egyenlo_b_vel_vagy_nagyobb_mint_b = a_nem_egyenlo_b_vel || a_nagyobb; //vagy: bool a_nem_egyenlo_b_vel_vagy_nagyobb_mint_b = a != b || a > b;


	return 0;
}