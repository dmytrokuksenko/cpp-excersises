/**
	@project: MIT assignments
	@file: assignment_1.3_2.cpp
	@description: basic statistics
 	@author: Dmytro Kuksenko
	@date: 2020-06-02
*/

#include <iostream>


int main()
{
	std::cout << "Enter number of integers N: ";
	int n;
	std::cin >> n;


	int first_number;
	std::cout << "Enter integers: ";
	std::cin >> first_number;
	int sum_numbers = first_number;
	int min = first_number;
	int max = first_number;

	for(int i = 0; i < n-1; ++i)
	{
		int number;
		std::cin >> number;

		sum_numbers += number;

		if (number > max)
		{
			max = number;
		}else if (number < min)
		{
			min = number;
		}

	}

	std::cout << "Max: " << max << "\n";
	std::cout << "Min: " << min << "\n";

	int range = max - min;
	std::cout << "Range: " << range << "\n";


	double mean = (double)sum_numbers/n;
	std::cout << "Mean: " << mean << "\n";

	return 0;

};


