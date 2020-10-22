#include "myClass.hpp"
#include <iostream>

myClass::myClass() : number_(1)
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