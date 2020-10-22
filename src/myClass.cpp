#include "myClass.hpp"
#include <iostream>

myClass::myClass(int number) : number_(number)
{
	std::cout << "Just went to constructor" << std::endl;
}

myClass::~myClass()
{
}

int myClass::addNumber(int number)
{
	return number + number_;
}

mockMyClass::mockMyClass(int number) : myClass(number)
{
	std::cout << "Inside mock class's constructor" << std::endl;
}