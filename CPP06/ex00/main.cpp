#include <iostream>
#include <iomanip>
#include "Convert.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Wrong number of arguments\n";
		return (0);
	}
	std::cout << std::fixed << std::setprecision(1); // Precision = 1
	std::string	argument = argv[1];
	
	Convert	convert(argument);

	char		c;
	int			n;
	float		f;
	double		d;

	c = static_cast<char>(convert);
	n = static_cast<int>(convert);
	f = static_cast<float>(convert);
	d = static_cast<double>(convert);

	return (0);
}