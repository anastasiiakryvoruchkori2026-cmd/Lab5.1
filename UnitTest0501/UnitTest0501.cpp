#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab501/Lab501.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest0501
{
	TEST_CLASS(UnitTest0501)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;

			c = h(1, 1);

			Assert::AreEqual(c, 1.5);
		}
	};
}
