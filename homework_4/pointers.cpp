#include <iostream>

int main() {
	int i = 0;
	double d = 5.5;
	char c = 'c';
	int * pi = &i;
	double * pd = &d;
	char * pc = &c;

	std::cout << pi << std::endl << pd << std::endl << (void *)pc << std::endl;
}
