
#include "Form.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{
	// Constructors
	std::cout << std::endl;
	std::cout << "CONSTRUCTING:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	Bureaucrat	bob("Bob", 1);
	Bureaucrat	bill("Bill", 150);

	//Bureaucrat & bob_ref = bob;
	//Bureaucrat & bill_ref = bill;

	Form		a("A13", 4, 6);
	Form		b("B97", 146, 135);

	cout << "Attempting to make a form with a required grade >150" << endl;
	try
	{
		Form c("Law", 155, 1000);
	}
	catch (Form::Exception &e)
	{
		cout << "Constructor failure: " << e.what() << endl;
	}

	cout << "Attempting to make a form with a required grade of <1" << endl;
	try
	{
		Form d("Lawdy", 0, 10);
	}
	catch(Form::Exception &e)
	{
		cout << "Unable to construct " << e.what() << '\n';
	}
	
	cout << "Form a successfully signed by Bob" << endl;
	bob.signForm(a);
	cout << "Form a has been signed " << a.getSign() << endl; 

	cout << "Form a unsuccessfully signed by Bill" << endl;
	bill.signForm(b);
	cout << "Form a has not been signed " << b.getSign() << endl;
}