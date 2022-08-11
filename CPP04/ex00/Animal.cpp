#include "Animal.hpp"
//Animal
Animal::Animal(void)
{
	cout << "Animal has been made" << endl;
	this->type = "Animal";
}

Animal::~Animal(void)
{
	cout << "Animal has deded" << endl;
}

string Animal::getType(void)
{
	return(this->type);
}

void makeSound(void)
{
	cout << "OoOOoooO I'm an animal" << endl;
}

string Animal::getType(void)
{
	return (this->type);
}

Animal& Animal::operator=(Animal &src)
{
	this->type = src.getType();
	return (*this);
}

Animal::Animal(Animal &src)
{
	this->type = src.type;
	cout << "Animal copy made" << endl;
}

//Dog
Dog::Dog(void)
{
	cout << "Doggo made" << endl;
	this->type = "Dog";
}

Dog::~Dog(void)
{
	cout << "Doggo deddo" << endl;
}
//Cat
Cat::Cat(void)
{
	cout << "Catto made" << endl;
	this->type = "Cat";
}

Cat::~Cat(void)
{
	cout << "Catto deddo" << endl;
}

sting Cat::getType(void) const
{
	return (this->type);
}

//WrongAnimal


//WrongCat