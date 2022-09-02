
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

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

	ShrubberyCreationForm		a("home");
	//Form		b("B97", 146, 135);
	
	cout << "Form a successfully signed by Bob" << endl;
	bob.signForm(a);
	cout << "Form a has been signed " << a.getSign() << endl;
	bob.executeForm(a);
	/*cout << "Form a unsuccessfully signed by Bill" << endl;
	bill.signForm(b);
	cout << "Form a has not been signed " << b.getSign() << endl;
	*/

}