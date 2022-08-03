#include <fstream>
#include <iostream>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Please enter filename, word to find and word to replace" << std::endl;
		return (0);
	}

	std::string filename = av[1];
	std::string wordToFind = av[2]; 
	std::string replacement = av[3];
	std::ifstream infile(filename);

	if (!infile.is_open())
	{
		std::cout << "Unable to open file, incorrect filename" << std::endl;
		return (1);
	}
	filename.append(".replace");
	std::ofstream outfile(filename, std::ios::out);

	size_t found;
	std::string output;

	while (std::getline(infile, output))
	{	
		found = output.find(wordToFind);
		while (found != std::string::npos)
		{
			output.erase(found, wordToFind.length());
			output.insert(found, replacement);
			found = output.find(wordToFind);
		}
		outfile << output << std::endl;
	}
	infile.close();
	outfile.close();
}