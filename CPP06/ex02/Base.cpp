#include "Base.hpp"
//Dynamic cast is used to downcast at run time (Not at compile time). To use it the base class must be virtual, moves through polymorphism (parent/child classes).
Base::Base()
{
}

Base::~Base()
{
	std::cout << "Base class destroyed" << std::endl;
}
Base* generate()
{
	int random = (std::rand() % 3) + 1;
	Base *base;

	switch(random)
	{
		case(1):
			std::cout << "A class generated" << std::endl;
			base = new A();
			return static_cast<Base *>(base);
			break;
		case(2):
			std::cout << "B class generated" << std::endl;
			base = new B();
			return static_cast<Base *>(base);
			break;
		case(3):
			std::cout << "C class generated" << std::endl;
			base = new C();
			return static_cast<Base *>(base);
			break;
		default:
			std::cout << "Error class generated" << std::endl;
			base = new D();
			return static_cast<Base *>(base);		
	}	
}

//If it is unable to dynamically cast it will return a nullpointer.
void    identify(Base *p) {
    
    if(dynamic_cast<A *>(p))
        std::cout << "This is a pointer to a Type A Instance" << std::endl;
    else if(dynamic_cast<B *>(p))
        std::cout << "This is a pointer to a Type B Instance" << std::endl;
    else if(dynamic_cast<C *>(p))
        std::cout << "This is a pointer to a Type C Instance" << std::endl;
    else
		std::cout << "Unknown class made" <<std::endl;
}

void    identify(Base &p) {
    ///Checking if ref argument is originally of Type A
    try {
        (void)dynamic_cast<A &>(p);
        std::cout << "This is a Reference to an A Type" << std::endl;
    }
    catch(std::exception &e){}; ///If cast fails will collect an error and move onto next block
    ////Checking if ref is originally of Type B
    try {
        (void)dynamic_cast<B &>(p);
        std::cout << "This is a Reference to an B Type" << std::endl;
    }
    catch(std::exception &e){};
    ///Checking if ref is originally of Type C
    try {
        (void)dynamic_cast<C &>(p);
        std::cout << "This is a Reference to an C Type" << std::endl;
    }
    catch(std::exception &e){};
}