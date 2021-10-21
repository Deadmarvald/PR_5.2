#include "pch.h"
#include "CppUnitTest.h"
#include "../PR5.2/Lab_05_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT52
{
	TEST_CLASS(UT52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = A(1., 1., 1.);
			Assert::AreEqual(t, -1.);
		}
	};
}