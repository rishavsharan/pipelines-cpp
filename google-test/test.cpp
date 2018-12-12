#include "pch.h"
#include "../myapp/incrementer.cpp"

TEST(TestIncrementer, PassThisGoogleTest) {
	EXPECT_EQ(incrementer(3), 4);
}

TEST(TestIncrementer, FailThisGoogleTest) {
	EXPECT_EQ(incrementer(20), 4);
}