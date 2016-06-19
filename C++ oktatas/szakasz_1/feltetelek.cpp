#include <iostream>

int main() {
	int a = 1;
	int b = 2;


	//ha teljesül (feltétel értéke true) a feltétel az if tartalma fut le
	if (a>b) {
		std::cout << "Az a nagyobb, mint b" << std::endl;
	}
	else { //ha nem teljesül, az else tartalma fog lefutni
		std::cout << "A b nagyobb, mint a" << std::endl;
	}

	//többféle teljesülés ellenõrzése
	//switch-be kell írni amit tesztelni akarun
	//a case-ekbe az egyes teljesülést
	//a default akkor fut le ha egyik sem teljesül
	/*
		a switch lényegében egy rövidítés, ugyanezt if-else feltételekkel is meg lehet írni
		ez ugyanazt csinálja, csak nem szép :P
		if(a==1){
			std::cout << "Az a értéke 1" << std::endl;
		}else{
			if(a==2){
				std::cout << "Az a értéke 2" << std::endl;
			}else{
				if(a==3){
					std::cout << "Az a értéke 3" << std::endl;
				}else{
					if(a==4){
						std::cout << "Az a értéke 4" << std::endl;
					}else{
						std::cout << "Az a értéke ismeretlen" << std::endl;
					}
				}
			}
		}
	*/
	switch (a)
	{
	case 1:
		std::cout << "Az a értéke 1" << std::endl;
		break;
	case 2:
		std::cout << "Az a értéke 2" << std::endl;
		break;
	case 3:
		std::cout << "Az a értéke 3" << std::endl;
		break;
	case 4:
		std::cout << "Az a értéke 4" << std::endl;
		break;
	default:
		std::cout << "Az a értéke ismeretlen" << std::endl;
		break;
	}

	return 0;
}