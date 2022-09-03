#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp" 
#include <iostream>
#include <ctime>
#include <cstdlib>

class Form;
class Bureaucrat;

class RobotomyRequestForm: public Form
{
	private:
		string _target;

	public:
		//Construct/Destruct
		RobotomyRequestForm(void);
		RobotomyRequestForm(string target);
		~RobotomyRequestForm(void);
		RobotomyRequestForm(RobotomyRequestForm &src);
		RobotomyRequestForm &operator=(RobotomyRequestForm &src);

		void execute(Bureaucrat const &executor) const;
		string getTarget(void);
};

#endif