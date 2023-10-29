#include "pch.h"
#include "CppUnitTest.h"

#include "../include/my_lib.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTestSum)
	{
	public:

		TEST_METHOD(TestMethodSum1element)
		{
			int val[1] = { 0 };
			Assert::AreEqual(0, sum(1, val));
		}

		TEST_METHOD(TestMethodSum2elements)
		{
			int val[2] = { 0, 1 };
			Assert::AreEqual(1, sum(2, val));
		}

		TEST_METHOD(TestMethodSum3elements)
		{
			int val[3] = { 100, 1000, 10000 };
			Assert::AreEqual(11100, sum(3, val));
		}
	};

	TEST_CLASS(UnitTestAverage)
	{
	public:

		TEST_METHOD(TestMethodAverage1element)
		{
			int val[1] = { 0 };
			Assert::AreEqual(0, average(1, val));
		}

		TEST_METHOD(TestMethodAverage2elements)
		{
			int val[2] = { 3, 1 };
			Assert::AreEqual(2, average(2, val));
		}

		TEST_METHOD(TestMethodAverage3elements)
		{
			int val[3] = { 100, 1000, 10000 };
			Assert::AreEqual(3700, average(3, val));
		}
	};
}
