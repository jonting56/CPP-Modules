#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void): _name("Form"), _sign(false), _execGrade(150), _signGrade(150) 
{	
	cout << "Default form made" << endl;
}

Form::Form(const string name, const int execGrade, const int signGrade): _name(name), _execGrade(execGrade), _signGrade(signGrade)
{
	if (execGrade < 1 || signGrade < 1)
	{
		throw (Form::GradeTooHighException());
	}
	if (execGrade > 150 || signGrade > 150)
	{
		throw (Form::GradeTooLowException());
	}
	this->_sign = false;
	cout << "Form called " << this->_name << " successfully made, required grade to sign is " << this->_signGrade << " or higher" << endl;
}

//Destructor
Form::~Form(void)
{
	cout << "Form named " << this->_name << " destroyed" << endl;
}

//Copy Constructor
Form::Form(Form &src): _name(src.getName() + "_copy"), _sign(src.getSign()), _execGrade(src.getExecGrade()), _signGrade(src.getSignGrade())
{
	cout << "Copy of the form " << this->_name << " made" << endl;
}

//Overload
Form &Form::operator=(Form &src)
{
	this->_sign = src.getSign();
	return (*this);
}

//Getters
string Form::getName(void) const
{
	return (this->_name);
}

int Form::getExecGrade(void) const
{
	return (this->_execGrade);
}

int Form::getSignGrade(void) const
{
	return (this->_signGrade);
}

int Form::getSign(void) const
{
	return (this->_sign);
}

//Setter
void Form::setSign(bool sign)
{
	this->_sign = sign;
}

const char *Form::Exception::what() const throw()
{
	return ("Form Exception");
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("the grade is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("the grade is too low");
}

const char *Form::NotSigned::what() const throw()
{
	return("cannot execute form, has not been signed");
}

//Method

void Form::beSigned(Bureaucrat &src)
{
	int grade = src.getGrade();
	if (this->_sign == 1)
	{
		cout << "Form already signed" << endl;
		return ;
	}
	if (this->_signGrade < grade)
	{
		throw(Form::GradeTooLowException());
		return ;
	}
	this->_sign = true;
	cout << this->_name << " has been signed by bureaucrat named " << src.getName() << " with a grade of " << src.getGrade() << endl;
}

//Function
std::ostream &operator<<(std::ostream &print, Form &src)
{
	print << "the form named " << src.getName() << " with a grade to sign of " << src.getSignGrade();
	return (print);
}