#include "Animal.hpp"

//Animal
Animal::Animal(void)
{
	cout << "Animal has been made" << endl;
}

Animal::~Animal(void)
{
	cout << "Animal has deded" << endl;
}

string Animal::getType(void) const
{
	return(this->type);
}

void Animal::makeSound(void) const
{
	cout << "OoOOoooO I'm an animal" << endl;
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

void    Dog::makeSound(void) const 
{
    cout << "Woof woof I'm a dog" << endl;
}

Dog &Dog::operator=(Dog &src)
{
    this->type = src.type;
    return (*this);
}

Dog::Dog(Dog &src)
{
    this->type = src.type;
    cout << "Copy of dog was made" << endl;
}

string Dog::getType(void) const
{
    return(this->type);
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

string Cat::getType(void) const
{
	return (this->type);
}

void Cat::makeSound(void) const
{
    cout << "Meow meow, I'm a cat" << endl; 
}

Cat &Cat::operator=(Cat &src)
{
    this->type = src.type;
    return (*this);
}

Cat::Cat(Cat &src)
{
    this->type = src.getType();
    cout << "Cat copy made" << endl;
}

//WrongAnimal

WrongAnimal::WrongAnimal(void)
{
    cout << "Wrong animal born" << endl;
    this->type = "Wrong Animal";
}

WrongAnimal::~WrongAnimal(void)
{
    cout << "Wrong animal dedo" << endl;
}

void    WrongAnimal::makeSound(void) const
{
    cout << "I don't make sound I'm a wrong animal" << endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &src)
{
    this->type = src.getType();
    return (*this);
}

WrongAnimal::WrongAnimal(WrongAnimal &src)
{
    cout << "Wrong Animal copy made" << endl;
    this->type = src.getType();
}

string  WrongAnimal::getType(void) const
{
    return (this->type);
}

//WrongCat

WrongCat::WrongCat(void)
{
    cout << "Wrong cat born" << endl;
    this->type = "Wrong Cat";
}

WrongCat::~WrongCat(void)
{
    cout << "Wrong cat died" << endl;
}

string WrongCat::getType(void) const
{
    return (this->type);
}

void WrongCat::makeSound(void) const
{
    cout << "Moooo, I'm a wrong cat" << endl;
}

WrongCat::WrongCat(WrongCat &src)
{
    cout << "Wrong Cat copy made" << endl;
    this->type = src.getType();
}

WrongCat &WrongCat::operator=(WrongCat &src)
{
    this->type = src.getType();
    return (*this);
}