#include "Brain.hpp"

Brain::Brain(void)
{
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "idea";
    std::cout << "Brain created" << std::endl;
    std::cout << "--------------" << std::endl;
}

Brain::~Brain(void)
{
    delete [] (this->ideas);
    std::cout << "Brain destroyed" << std::endl;
}

Brain &Brain::operator=(Brain &src)
{
    for (int i=0;i < 100; i++)
        this->ideas[i] = src.ideas[i];
    return (*this);
}

Brain::Brain(Brain &src)
{
    std::string *src_ideas = src.getIdeas();
    this->ideas = new std::string[100];
    for (int i=0;i < 100; i++)
        this->ideas[i] = src_ideas[i];
    std::cout << "Brain copy constructor called" << std::endl;
}

std::string *Brain::getIdeas(void)  
{
    return (this->ideas);
}