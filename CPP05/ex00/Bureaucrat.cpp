#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(string name, int grade)
{
	if (grade < 1)
		throw (GradeTooHighException);
	if (grade > 150)
		throw (GradeTooLowException);
	cout << "Bureaucrat made " << name << endl;
}

Bureaucrat::~Bureaucrat(void)
{
	cout << "Man down, " << this.name << "died" << endl;
}

string Bureaucrat::getName(void)
{
	return (this->name);
}

int Bureaucrat::getGrade(void)
{
	return (this->grade);
}
