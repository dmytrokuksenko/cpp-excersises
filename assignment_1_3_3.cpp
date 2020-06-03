/**
	@project: MIT assignments
	@file: assignment_1.3_3.cpp
	@description: find the first prime to N
 	@author: Dmytro Kuksenko
	@date: 2020-06-02
*/

#include <iostream>


int main()
{
	std::cout << "Enter the integer number: ";
	int number;
	std::cin >> number;

	bool prime = true;

	while(number > 0)
	{
		for(int j = number -1; j > 1; --j)
			{
				if(number % j == 0)
				{
					prime = false;
				}
			}
		if(prime)
		{
			std::cout << "The first prime number is: " << number;
			break;
		}else
		{
			number --;
			prime = true;
		}
	}

	return 0;

};


