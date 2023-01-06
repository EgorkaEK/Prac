#include <iostream>
long int forloop(long int count) {
	for (count = 1; count < 10; count++)
		std::cout << count << " ";

	return count;
}
