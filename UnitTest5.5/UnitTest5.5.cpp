#include "pch.h"
#include "CppUnitTest.h"
#include "../5.5 продовження/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
			double test;
			const double b1 = 1;
			const double q = 2;
			const double n = 3;
			test = q * (b1, q, n - 1);
			Assert::AreEqual(test, 4.);

		}
	};
}
