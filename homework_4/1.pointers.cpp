#include <iostream>

int main() {
	int i = 0;
	double d = 5.5;
	char c = 'c';
	int * pi = &i;
	double * pd = &d;
	char * pc = &c;

	std::cout << pi << std::endl;
	std::cout << pd << std::endl;
	std::cout << (void *)pc << std::endl;
}
