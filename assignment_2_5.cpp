/**
	@project: MIT assignments
	@file: assignment_2.5.cpp
	@description: calculating PI using Monte-Carlo Method
 	@author: Dmytro Kuksenko
	@date: 2020-06-05
*/

#include <iostream>
#include <cstdlib>
#include <cmath>


/**
  Description.
  @param inSquare: total number of throws
  @return pi: approximated value of pi
 */

double piApproximation(const int inSquare)
{
	int inCircle = 0;

	for (int i = 0; i < inSquare; ++i)
	{
		//srand(time(0));
		double x = (double)rand()/RAND_MAX;
		double y = (double)rand()/RAND_MAX;

		if (sqrt(x * x + y * y) < 1)
		{
			inCircle++;
		}
	}

	double pi = (double)4*inCircle/inSquare;
	return pi;
};


int main()
{

	std::cout << "Enter the number of throws: " ;
	int n;
	std::cin >> n;

	std::cout << "The approximated value of PI is: " << piApproximation(n);


	return 0;

};


