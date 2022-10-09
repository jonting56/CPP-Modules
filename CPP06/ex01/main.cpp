#include "Data.hpp"
//Reinterpret cast used to directly turn a pointer into a memory address. Does not check whether the conversion is valid.
static uintptr_t serialise(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

static Data* deserialise(uintptr_t ptr)
{
	return reinterpret_cast<Data *>(ptr);
}


int main()
{
	Data trial1("data");

	uintptr_t trial = serialise(&trial1);

	Data *trial2 = deserialise(trial);

	std::cout << "Address of trial is: " << &trial1 << std::endl;
	std::cout << "Address of trial2 is : " << trial2 << std::endl;

	std::cout << "Data of trial is: " << trial1.getValue() << std::endl;
	std::cout << "Data of trial2 is : " << (*trial2).getValue() << std::endl;
}