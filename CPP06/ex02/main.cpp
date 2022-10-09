#include "Base.hpp"

int main(void)
{
	std::srand(std::time(0)); // need to call this before calling std::rand()

	// 3 random Base children
	std::cout << "3 RANDOM BASE CHILDREN:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	Base *rand1 = generate();
	Base *rand2 = generate();
	Base *rand3 = generate();

	std::cout << std::endl << std::endl;

	// Create references
	Base &rand1_ref = *rand1;
	Base &rand2_ref = *rand2;
	Base &rand3_ref = *rand3;


	std::cout << "IDENTIFY VIA ADDRESS:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	identify(rand1);
	identify(rand2);
	identify(rand3);

	std::cout << std::endl << std::endl;

	std::cout << "IDENTIFY VIA REFERENCE:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	identify(rand1_ref);
	identify(rand2_ref);
	identify(rand3_ref);
	return (0);
}