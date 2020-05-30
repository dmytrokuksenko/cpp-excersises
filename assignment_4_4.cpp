/**
	@project: MIT assignments
	@file: assignment_4_4.cpp
	@description: implement data structure, stack, using templates
	@author: Dmytro Kuksenko
	@date: 2020-05-28
*/

#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

template <class T> class Stack;

template <class T>
Stack<T> operator+(const Stack<T> &s1, const Stack<T> &s2)
{
	Stack<T> result = s1;

	for(int i = 0; i < s1.items.size(); ++i)
	{
		result.items.push_back(s2.items[i]);
	}

	return result;

}

template <class T>
class Stack
{
	friend Stack<T> operator+(const Stack<T> &s1, const Stack<T> &s2);
	vector<T> items;

public:

	/**
		Checks if the stack is empty.
		@return bool true/false
	*/
	bool empty() const {return items.empty();};

	/**
		Pushes an item to the stack.
		@param item item to push to the stack
	*/
	void push(const T &item) {items.push_back(item);};

	/**
		Returns a reference to the most-recently-added item to the stack.
		@return most-recently-added item
	*/
	T top() {
		T last = items.back();
		items.pop_back();
		return last;
	}
};

int main()
{

	return 0;

};


