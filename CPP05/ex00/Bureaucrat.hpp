#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

using std::cout;
using std::endl;
using std::string;

class Bureaucrat
{
	private:
		const string name;
		int grade;
	
	public:
		Bureaucrat(string name int grade);
		~Bureaucrat(void);

		string getName(void);
		int getGrade(void);
};

#endif