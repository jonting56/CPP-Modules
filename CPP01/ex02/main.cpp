#include <iostream>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout << "This is the string address: " << &brain << std::endl;
	std::cout << "This is the string pointer: " << stringPTR << std::endl;
	std::cout << "This is the string reference : " << &stringREF << std::endl;

	std::cout << "This is the string value: " << brain << std::endl;
	std::cout << "This is the dereferenced pointer: " << *stringPTR << std::endl;
	std::cout << "This is the string reference: " << stringREF << std::endl;
}