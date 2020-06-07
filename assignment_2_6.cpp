/**
	@project: MIT assignments
	@file: assignment_2.6.cpp
	@description: manipulating strings
 	@author: Dmytro Kuksenko
	@date: 2020-06-06
*/

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>

#define LENGTH 10
#define WIDTH 10

using namespace std;


/**
   Print the content of integer array with a string
	@param array: array of integers
	@param size: size of the array
 */
void printArray(const int arr[], const int size)
{

	for(int i = 0; i < size; ++i)
	{
		if(i < size - 1)
		{
			cout << arr[i] << ", ";
		}else
		{
			cout << arr[i];
		};

	}
};

/**
   Reverse values in the array
	@param array: array of integers
	@param size: size of the array
 */

void reverseArray(int arr[], const int size)
{
	int newArray[size];

	for(int i = 0; i < size; ++i)
	{
		newArray[i] = arr[size - i];
	}

	arr = newArray;
};

/**
   Transpose an array.
	@param input: input array of integers
	@param output: empty output array of integers
	@return output: transposed array
 */
int transpose(const int input[][LENGTH], int output[][WIDTH])
{
	for(int i = 0; i < WIDTH; ++i)
	{
		for(int j = 0; j < LENGTH; ++j)
		{
			output[j][i] = input[i][j];
		}
	}
	return output;
}


int main()
{

	int array[] = {10, 5, 0};

	int size = *(&array + 1) - array;

	printArray(array, size);

	return 0;

};


