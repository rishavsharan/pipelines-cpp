#include "pch.h"
#include "../myapp/incrementer.cpp"

TEST(TestIncrementer, PassThis) {
	EXPECT_EQ(incrementer(3), 4);
}

TEST(TestIncrementer, FailThis) {
	EXPECT_EQ(incrementer(20), 4);
}