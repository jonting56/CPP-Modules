#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form("President form", 5, 25)
{
	cout << "President's form has been created" << endl;
}

PresidentialPardonForm::PresidentialPardonForm(string target): Form("President form", 5, 25)
{
	this->_target = target;
	cout << "President's form has been created with a execution grade of 5 and signed grade of 25" << endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	cout << "President's form has been destroyed" << endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &src)
{
	this->_target = src.getTarget();
	cout << "Copy of president's form created" << endl;
	return (*this);
}

string PresidentialPardonForm::getTarget(void)
{
	return (this->_target);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->getSign() == 0)
	{
		throw (Form::NotSigned());
		return ;
	}
	if (this->getExecGrade() < executor.getGrade())
	{
		throw (Form::GradeTooLowException());
		return ;
	}
	else
		cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << endl;
}