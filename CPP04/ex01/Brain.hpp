#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
        std::string *ideas;
    public:
        Brain(void);
        ~Brain(void);

        Brain &operator=(Brain &src);
        Brain(Brain &src);
        std::string *getIdeas(void);
};

#endif