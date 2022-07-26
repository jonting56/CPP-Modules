#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;


// Base classes that have functions which will be overridden need to be stated as virtual
// so that they will use the child class over the parent class
// This is the case in the animal class and wronganimal class
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
	public:
        Dog(void);
        ~Dog(void);
        void makeSound(void) const;

        Dog &operator=(Dog &src);
        Dog(Dog &src);
        string getType(void) const;
};

class Cat: public Animal
{
	private:
		string type;
	public:
        Cat(void);
        ~Cat(void);

        Cat &operator=(Cat &src);
        Cat(Cat &src);
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