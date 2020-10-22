#pragma once
#include "gmock/gmock.h"

class myClass
{
private:
	int number_;

public:
	myClass(int number);
	virtual int addNumber(int number);
	virtual ~myClass();
};

class mockMyClass : public myClass
{
public:
	mockMyClass(int number);
	MOCK_METHOD(int, addNumber, (int number), (override));
};