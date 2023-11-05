#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double x = 2.0;
			double expected = sin(x) / (cos(x) + 2.0);
			double actual = g(x);
		}
	};
}
