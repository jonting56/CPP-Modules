#include "AAnimal.hpp"
#include "Brain.hpp"

int main( void )
{
    // This class cannot be instantiated because it is an abstract class,
    // only classes which inherit from it can be instantiated
    AAnimal animal;

	AAnimal *dog = new Dog();
    AAnimal *cat = new Cat();

    dog->makeSound();
    cat->makeSound();
    delete dog;
    delete cat;
}