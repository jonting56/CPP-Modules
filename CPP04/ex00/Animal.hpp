#ifndef ANIMAL_HPP
#define ANIMAL_HPP

using std::cout
using std::endl
using std::string

class Animal
{
	protected:
		string type;
	public:
		Animal(void)
		~Animal(void);

		Animal &operator=(Animal &src);
		Animal(Animal &src);
		string getType(void);
		void makeSound(void);
};

class Dog: public Animal
{
	private:
		string type;
	public:
		string getType(void) const;
};

class Cat: public Animal
{
	private:
		string type;
	public:

};

class WrongAnimal
{
	private:
		string type;
	public:
};

class WrongCat: public WrongAnimal
{
	private:
		string type;
	public:

};

#endif