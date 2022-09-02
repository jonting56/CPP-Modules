#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>
#include <iostream>

class Form;
class Bureaucrat;

class ShrubberyCreationForm: public Form
{
	private:
		string _target;
	
	public:
		ShrubberyCreationForm(string name);
		virtual ~ShrubberyCreationForm(void);

		ShrubberyCreationForm(ShrubberyCreationForm &src);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);
		
		//Getter
		const string getTarget(void);

		//Methods
		void execute(Bureaucrat const &executor) const;
		void beSigned(const Bureaucrat &src);

};

#endif