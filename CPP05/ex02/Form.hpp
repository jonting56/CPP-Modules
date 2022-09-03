#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

#include <iostream>
#include <stdbool.h>


using std::string;
using std::endl;
using std::cout;

class Bureaucrat;

class Form
{
	private:
		const string _name;
		bool _sign;
		const int _execGrade;
		const int _signGrade;
	
	public:
		//Constructors & Destructor
		Form(void);
		Form(const string name, const int execGrade, const int signGrade);
		virtual ~Form(void);
		Form(Form &src);

		//Setters
		void setSign(bool sign);

		//Getters
		string getName(void) const;
		int getExecGrade(void) const;
		int getSignGrade(void) const;
		int getSign(void) const;

		//Methods
		void beSigned(Bureaucrat &src);
		virtual void execute(Bureaucrat const &executor) const = 0;

		//Overload
		Form &operator=(Form &src);

		class Exception: std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException: public Form::Exception
		{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooHighException: public Form::Exception
		{
			public:
				virtual const char *what() const throw();
		};

		class NotSigned: public Form::Exception
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &print, Form &src);
#endif