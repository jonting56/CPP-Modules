#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

using std::cout;
using std::endl;
using std::string;

//Abstract classes must have at least one pure virtual method
//in this case it is makeSound since there is not 'animal sound'
//this method is later defined by the classes which inherit from it
class AAnimal
{
	protected:
		string type;
	public:
		AAnimal(void);
		virtual ~AAnimal(void) = 0;

		AAnimal &operator=(AAnimal &src);
		AAnimal(AAnimal &src);
		virtual string getType(void) const;
		virtual void makeSound(void) const = 0;
};

class Dog: public AAnimal
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

class Cat: public AAnimal
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