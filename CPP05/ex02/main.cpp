
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	// Constructors
	std::cout << std::endl;
	std::cout << "CONSTRUCTING:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	Bureaucrat	bob("Bob", 1);
	Bureaucrat	bill("Bill", 150);

	ShrubberyCreationForm		a("home");
	RobotomyRequestForm			b("B97");
	PresidentialPardonForm		c("mafia boss");
	
	cout << "Form a successfully signed by Bob" << endl;
	bob.signForm(a);
	cout << "If form has been signed number will be one, " << a.getSign() << endl;
	bob.executeForm(a);
	cout << "Form a unsuccessfully signed by Bill" << endl;
	bill.signForm(b);
	cout << "Form a has not been signed " << b.getSign() << endl;
	bob.signForm(b);

	cout << "Will attempt to robotomise 5 times 50% chance to pass" << endl;
	for (int i=0;i<5;i++)
		bob.executeForm(b);
	bob.signForm(c);
	bob.executeForm(c);
}