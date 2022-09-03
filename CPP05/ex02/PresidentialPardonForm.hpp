#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	private:
		string _target;

	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(string target);
		~PresidentialPardonForm(void);

		PresidentialPardonForm(PresidentialPardonForm &src);
		PresidentialPardonForm &operator=(PresidentialPardonForm &src);

		void execute(Bureaucrat const &src) const;
		string getTarget(void);
};

#endif
