#include "MutantStack.hpp"
#include <iostream>
#include <vector>

int main()
{
    MutantStack<int> mstack;
    std::vector<int> mvector;
    std::cout << "Pushing 5 to both arrays" << std::endl;
    mstack.push(5);
    mvector.push_back(5);
    std::cout << "Pushing 17 to both" << std::endl;
    mstack.push(17);
    mvector.push_back(17);
    std::cout << "Popping top from both stacks" << std::endl;
    std::cout << mstack.top() << std::endl;
    std::cout << mvector.front() << std::endl;
    mstack.pop();
    mvector.pop_back();
    std::cout << "Size of mutant " << mstack.size() << std::endl;
    std::cout << "Size of vector " << mvector.size() << std::endl;
    std::cout << "Adding ranom numbers to stacks" << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    mvector.push_back(3);
    mvector.push_back(5);
    mvector.push_back(737);
    mvector.push_back(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    std::vector<int>::iterator mit = mvector.begin();
    std::vector<int>::iterator mite = mvector.end();

    while (mit != mite) {
        std::cout << *mit << std::endl;
        mit++;
    }
}