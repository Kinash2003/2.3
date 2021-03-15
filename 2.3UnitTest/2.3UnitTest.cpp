#include "pch.h"
#include "CppUnitTest.h"
#include "../2.3/LongLong.h"
#include "../2.3/LongLong.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My23UnitTest
{
	TEST_CLASS(My23UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LongLong A(9, 10), B(0, 0);
			
			Assert::AreEqual(A * B, 90.);
		}
	};
}
