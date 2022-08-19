#include "AAnimal.hpp"

//AAnimal
AAnimal::AAnimal(void)
{
	cout << "AAnimal has been made" << endl;
    this->type = "Aanimal";
}

AAnimal::~AAnimal(void)
{
	cout << "AAnimal has deded" << endl;
    std::cout << "--------------" << std::endl;
}

string AAnimal::getType(void) const
{
	return(this->type);
}

void AAnimal::makeSound(void) const
{
	cout << "OoOOoooO I'm an AAnimal" << endl;
}

AAnimal& AAnimal::operator=(AAnimal &src)
{
	this->type = src.getType();
	return (*this);
}

AAnimal::AAnimal(AAnimal &src)
{
	this->type = src.getType();
	cout << "AAnimal copy made" << endl;
}

//Dog
Dog::Dog(void)
{
	cout << "Doggo made" << endl;
    this->brain = new Brain;
	this->type = "Dog";
}

Dog::~Dog(void)
{
	cout << "Doggo deddo" << endl;
    delete this->brain;
}

void    Dog::makeSound(void) const 
{
    cout << "Woof woof I'm a dog" << endl;
}

Dog &Dog::operator=(Dog &src)
{
    this->type = src.type;
    if (this->brain)
        delete this->brain;
    this->brain = new Brain(*(src.getBrain()));
    return (*this);
}

Dog::Dog(Dog &src)
{
    this->type = src.getType();
    this->brain = new Brain(*(src.getBrain()));
    cout << "Copy of dog was made" << endl;
    std::cout << "--------------" << std::endl;
}

string Dog::getType(void) const
{
    return(this->type);
}

Brain *Dog::getBrain(void)
{
    return (this->brain);
}

//Cat
Cat::Cat(void)
{
	cout << "Catto made" << endl;
    this->brain = new Brain;
	this->type = "Cat";
}

Cat::~Cat(void)
{
	cout << "Catto deddo" << endl;
    delete this->brain;
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
    if (this->brain)
        delete this->brain;
    this->brain = new Brain(*(src.getBrain()));
    return (*this);
}

Cat::Cat(Cat &src)
{
    this->type = src.getType();
    this->brain = new Brain(*(src.getBrain()));
    cout << "Cat copy made" << endl;
    std::cout << "--------------" << std::endl;
}

Brain *Cat::getBrain(void)
{
    return (this->brain);
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