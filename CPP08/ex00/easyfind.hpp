#pragma once

#include <iostream>
#include <stdexcept>

template <typename T>

void easyfind(T arr, int num)
{
	try
	{
		if (!std::is_array<int>::value)
		{
			throw std::invalid_argument("Not an int array");
		}
		for (int i = 0;i < arr.size(); i++)
		{
			if (arr[i] == num)
			{
				std::cout << "Found " << num << std::endl;
				return ;
			}
		}
		std::cout << "Unable to find " << num << " in int array" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return ;
	}
}