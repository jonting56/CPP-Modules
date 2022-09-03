#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form("Robot form", 45, 72)
{
	this->_target = "Robot form";
	cout << "Default robot form made" << endl;
}

RobotomyRequestForm::RobotomyRequestForm(string target): Form("Robot form", 45, 72)
{
	this->_target = target;
	cout << "Robot form made, with a target " << target << " and execution grade of 45 and signed grade of 72" << endl; 
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	cout << "Robot form has been destroyed" << endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &src)
{
	this->_target = src.getTarget();
	cout << "Copy of robot form created" << endl;
}

string RobotomyRequestForm::getTarget(void)
{
	return (this->_target);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
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
	{
		int sucess = rand() % 2;
		cout << "*Drilling noises*\nRobotomy only has a 50% chance to work!" << endl;
		if (sucess == 0)
		{
			cout << this->_target << " has been successfully robotomised" << endl;
		}
		else
			cout << "Robotomy has failed...." << endl;
	}
}