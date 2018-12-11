#include "stdafx.h"
#include "CppUnitTest.h"
#include "../myapp/incrementer.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unittest
{		
	TEST_CLASS(TestIncrementerinUT)
	{
	public:
		TEST_METHOD(PassThis)
		{
			Assert::AreEqual(incrementer(4), 5);
		}
		TEST_METHOD(FailThis)
		{
			Assert::AreEqual(incrementer(6), 9);
		}
	};
}