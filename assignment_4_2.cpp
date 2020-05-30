/**
	@project: MIT assignments
	@file: assignment_4_2.cpp
	@description: implement function using temaplates
	@author: Dmytro Kuksenko
	@date: 2020-05-30
*/


#include <iostream>
#include <string>

//Minimum of two elements of any comparable type using preprocessors macros
#define get_min(a, b) (a < b ? a : b)


/**
	A minimum function of two elements of any comparable type using templates

	@param  x,y: two elements of any comparable type
	@return minimum value of two elements
*/

template <typename T>

T min(T x, T y) {

	return x < y ? x : y;
};


int main(){

	std::cout << "The minimum value is: " << min<int>(2, 2) << "\n";
	std::cout << "The minimum value is: " << min<float>(2.4, 3.1) << "\n";
	std::cout << "The minimum value is: " << min<std::string>("one", "three") << "\n";


	std::cout << "The minimum value is: " << get_min(3, 5) << "\n";

	return 0;
}
