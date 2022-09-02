#include "Bureaucrat.hpp"
#include "Form.hpp"

//Constructors

Bureaucrat::Bureaucrat(void): _name("Bureaucrat"), _grade(150)
{
	cout << "Default bureaucrat made, grade is 150" << endl;
}

Bureaucrat::Bureaucrat(string name, int grade): _name(name)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	this->_grade = grade;
	cout << "Bureaucrat made named " << name << endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src): _name(src.getName() + "_copy")
{
	this->_grade = src._grade;
	cout << "Bureaucrat copy made named " << src._name << ", has a grade of " << src._grade << endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src)
{
	this->_grade = src.getGrade();
	return (*this);
}

//Destructor
Bureaucrat::~Bureaucrat(void)
{
	cout << "Man down, " << this->_name << " died" << endl;
}

//Methods
void Bureaucrat::increment(void)
{
	if (this->_grade == 1)
	{
		cout << "Grade cannot go higher than 1" << endl;
		return;
	}
	this->_grade--;
	cout << "Grade successfully incremented, grade is now " << this->_grade << endl; 
}

void Bureaucrat::decrement(void)
{
	if (this->_grade == 150)
	{
		cout << "Grade cannot be dropped lower than 150" << endl;
		return;
	}
	this->_grade++;
	cout << "Grade successfully decremented, grade is now " << this->_grade << endl;
}

void Bureaucrat::signForm(Form &src)
{
	try
	{
		src.beSigned(*this);
		cout << this->_name << " has successfully signed the form called " << src.getName() << endl;
	}
	catch (Form::Exception &e)
	{
		std:: cout << "Bureaucrat " << this->_name << " with a grade " << this->_grade << " cannot sign " << src << " beacause " << e.what() << endl;
	}
}

void Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
		cout << this->_name << " successfully executed " << form.getName() << endl;
	}
	catch(Form::Exception& e)
	{
		cout << e.what() << endl;
	}
	
}

//Getters
const string Bureaucrat::getName(void) const
{
	return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

//Setters
void Bureaucrat::setGrade(int const grade)
{
	this->_grade = grade;
}

//Exceptions
const char *Bureaucrat::Exception::what() const throw()
{
	return ("Bureaucrat Exception");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade cannot be less that one!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade cannot be more than 150!");
}

//Print function
std::ostream &operator<<(std::ostream &print, Bureaucrat const &src)
{
	print << src.getName() << ", bureaucrat grade " << src.getGrade();
	return (print);
}