#pragma once
#include "gmock/gmock.h"

class myClass
{
private:
	int number_;

public:
	myClass();
	virtual int addNumber(int number);
	virtual ~myClass();
};

class mockMyClass : public myClass
{
public:
	MOCK_METHOD(int, addNumber, (int number), (override));
};