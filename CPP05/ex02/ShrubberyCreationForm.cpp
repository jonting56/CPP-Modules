#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(string target): Form::Form("Shrub form", 137, 145)
{
	this->_target = target;
	cout << "Shrubbery form has been made" << endl; 
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	cout << "Shrubbery form named destroyed" << endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &src): Form::Form("Shrub form", 137, 145)
{
	this->_target = src.getTarget();
	cout << "Copy of shrubbery form created" << endl;
}

//Getter
const string ShrubberyCreationForm::getTarget(void) 
{
	return(this->_target);
}

//Method

void ShrubberyCreationForm::beSigned(const Bureaucrat &src)
{
	if (this->getSign() == 1)
	{
		cout << "Form has already been signed" << endl;
		return ;
	}
	if (this->getSign() < src.getGrade())
	{
		cout << src.getName() << "'s grade is too low to sign this form the grade must be " << this->_signGrade << " or higher" << endl;
		throw (Form::GradeTooLowException());  
	}
	else if (this->getSign() >= src.getGrade())
	{
		this->setSign(true);
		cout << "Form successfully signed by " << src.getName() << endl;
	}
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->getSign() == 0)
	{
		throw (Form::NotSigned());
		return ;
	}
	if (this->getExecGrade() > executor.getGrade())
	{
		throw (Form::GradeTooLowException());
		return ;
	}
	std::ofstream shrub(this->_target + "_shrubbery");
	shrub << "tree";
	shrub.close();
}

