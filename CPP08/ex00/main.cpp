#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
    std::vector<int> vec;
    for (int i = 0; i < 6; i++) {
        vec.push_back(i);
    }

    std::list<int> lst;
    for (int i = 0; i < 6; i++) {
        lst.push_back(i);
    }
    std::cout << "Created vector and list of ints 0 to 6" << std::endl;
    std::cout << "--------------------------" << std::endl;
    std::cout << "Testing vector of ints, looking for 2" << std::endl;
    try {
        easyfind(vec, 2);
    } catch (const std::string& except) {
        std::cout << except << std::endl;
    }
    std::cout << "Testing list of ints, looking for 10" << std::endl;
    try {
        easyfind(lst, 10);
    } catch (const std::string& except) {
        std::cout << except << std::endl;
        
    }
}