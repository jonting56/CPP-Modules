#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

using std::cout;
using std::endl;
using std::string;

class Form;

class Bureaucrat
{
	private:
		const string _name;
		int _grade;
	
	public:
		//Construct/Destruct
		Bureaucrat(void);
		Bureaucrat(string name, int grade);
		~Bureaucrat(void);
		Bureaucrat(Bureaucrat const &src);
	
		//Methods
		void increment(void);
		void decrement(void);
		virtual void signForm(Form &src);
		void executeForm(Form const &form);
		
		//Getters
		const string getName(void) const;
		int getGrade(void) const;

		//Setter
		void setGrade(int const grade);

		//Overload
		Bureaucrat &operator=(Bureaucrat const &src);
		
	//Exception classes
	class Exception: public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class GradeTooLowException:public Bureaucrat::Exception
	{
		public:
			virtual const char *what() const throw();
	};
	class GradeTooHighException: public Bureaucrat::Exception
	{
		public:
			virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &print, Bureaucrat const &src);

#endif