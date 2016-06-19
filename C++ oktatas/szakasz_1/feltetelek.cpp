#include <iostream>

int main() {
	int a = 1;
	int b = 2;


	//ha teljes�l (felt�tel �rt�ke true) a felt�tel az if tartalma fut le
	if (a>b) {
		std::cout << "Az a nagyobb, mint b" << std::endl;
	}
	else { //ha nem teljes�l, az else tartalma fog lefutni
		std::cout << "A b nagyobb, mint a" << std::endl;
	}

	//t�bbf�le teljes�l�s ellen�rz�se
	//switch-be kell �rni amit tesztelni akarun
	//a case-ekbe az egyes teljes�l�st
	//a default akkor fut le ha egyik sem teljes�l
	/*
		a switch l�nyeg�ben egy r�vid�t�s, ugyanezt if-else felt�telekkel is meg lehet �rni
		ez ugyanazt csin�lja, csak nem sz�p :P
		if(a==1){
			std::cout << "Az a �rt�ke 1" << std::endl;
		}else{
			if(a==2){
				std::cout << "Az a �rt�ke 2" << std::endl;
			}else{
				if(a==3){
					std::cout << "Az a �rt�ke 3" << std::endl;
				}else{
					if(a==4){
						std::cout << "Az a �rt�ke 4" << std::endl;
					}else{
						std::cout << "Az a �rt�ke ismeretlen" << std::endl;
					}
				}
			}
		}
	*/
	switch (a)
	{
	case 1:
		std::cout << "Az a �rt�ke 1" << std::endl;
		break;
	case 2:
		std::cout << "Az a �rt�ke 2" << std::endl;
		break;
	case 3:
		std::cout << "Az a �rt�ke 3" << std::endl;
		break;
	case 4:
		std::cout << "Az a �rt�ke 4" << std::endl;
		break;
	default:
		std::cout << "Az a �rt�ke ismeretlen" << std::endl;
		break;
	}

	return 0;
}