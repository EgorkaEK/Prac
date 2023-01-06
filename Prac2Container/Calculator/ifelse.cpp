#include <iostream>
long int ifelse(long int a, long int b) {
	if (a + b < 15) {
		std::cout << "Число меньше 15: ";
		return a + b;
	}
	else {
		std::cout << "Число больше 15: ";
		return a + b;
	}
}
