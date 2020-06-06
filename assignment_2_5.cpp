/**
	@project: MIT assignments
	@file: assignment_2.5.cpp
	@description: calculate PI using Monte-Carlo Method
 	@author: Dmytro Kuksenko
	@date: 2020-06-05
*/

#include <iostream>
#include <cstdlib>
#include <cmath>


/**
  Approximates PI using Monte-Carlo method.
  @param N: total number of throws
  @return pi: approximated value of PI
 */

double piApproximation(const int n)
{
	srand(time(0));
	int inCircle = 0;

	for (int i = 0; i < n; ++i)
	{
		double x = (double)rand()/RAND_MAX;
		double y = (double)rand()/RAND_MAX;

		if (sqrt(x * x + y * y) < 1)
		{
			inCircle++;
		}
	}

	double pi = 4.0*inCircle/n;
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
