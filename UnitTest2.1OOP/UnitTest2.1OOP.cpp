#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab2.1OOP/Combination.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest21OOP
{
	TEST_CLASS(UnitTest21OOP)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(1, Factorial(0));
		}
	};
}
