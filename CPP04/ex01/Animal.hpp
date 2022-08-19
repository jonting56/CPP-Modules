#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

using std::cout;
using std::endl;
using std::string;

class Animal
{
	protected:
		string type;
	public:
		Animal(void);
		virtual ~Animal(void);

		Animal &operator=(Animal &src);
		Animal(Animal &src);
		virtual string getType(void) const;
		virtual void makeSound(void) const;
};

class Dog: public Animal
{
	private:
		string type;
        Brain *brain;
	public:
        Dog(void);
        ~Dog(void);
        void makeSound(void) const;

        Dog &operator=(Dog &src);
        Dog(Dog &src);
        Brain *getBrain(void);
        string getType(void) const;
};

class Cat: public Animal
{
	private:
		string type;
        Brain *brain;
	public:
        Cat(void);
        ~Cat(void);

        Cat &operator=(Cat &src);
        Cat(Cat &src);
        Brain *getBrain(void);
        void makeSound(void) const;
        string getType(void) const;
};

class WrongAnimal
{
	private:
		string type;
	public:
        WrongAnimal(void);
        virtual ~WrongAnimal(void);

        WrongAnimal &operator=(WrongAnimal &src);
        WrongAnimal(WrongAnimal &src);
        virtual void makeSound(void) const;
        string getType(void) const;
};

class WrongCat: public WrongAnimal
{
	private:
		string type;
	public:
        WrongCat(void);
        ~WrongCat(void);

        void makeSound(void) const;
        string getType(void) const;

        WrongCat &operator=(WrongCat &src);
        WrongCat(WrongCat &src);
};

#endif