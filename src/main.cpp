#include <iostream>
#include <myClass.hpp>
#include <gtest/gtest.h>

using ::testing::AtLeast;
using namespace ::testing;

TEST(MyTest, addNumber)
{
	EXPECT_TRUE(1);
	mockMyClass my_mock_class;
	EXPECT_CALL(my_mock_class, addNumber(1))
		.Times(AtLeast(1));
	myClass my_class;
	my_mock_class.addNumber(1);
}

int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}