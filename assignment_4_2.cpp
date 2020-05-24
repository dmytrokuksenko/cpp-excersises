/**
	Assignment #4.2
	Using templates, implement a min function which returns the minimum of two elements of
	any comparable type. Implement the same function using preporcessors macros only.

	@author: Dmytro Kuksenko
	@date: May 24, 2020
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