#include "Animal.hpp"
#include "Brain.hpp"

// Deep copy means that even though the variable was copied from the same address the value
// should be stored in a different address incase the original is deleted, and the copy loses
// the value.
int main( void )
{
	const Animal *(animal[6]);

    std::cout << "3 dogs and cats will be made while alternating" << endl;
    for (int i=0; i < 5; i++) 
    {
        if ( i % 2 == 0)
            animal[i] = new Dog();
        else    
            animal[i] = new Cat();
    }

    for (int i=0; i < 5; i++)
        delete animal[i];

    cout << "\n\nNew animals made" << endl;
    Dog spot;
    Cat garfield;

    cout << "Making deep copies of spot and garfield, address should be different" << endl;

    Dog spot_copy(spot);
    Cat garfield_copy(garfield);

    cout << "spot address " << &spot << endl;
    cout << "Spot_copy " << &spot_copy << endl;
    cout << "Garfield address " << &garfield << endl;
    cout << "Garfield_copy " << &garfield_copy << endl;
}