#include "pch.h"
#include "CppUnitTest.h"

extern "C" int analyzeRectangleside(int, int, int, int);
extern "C" int main();

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ002
{
	TEST_CLASS(REQ002)
	{
	public:

		TEST_METHOD(RectangleFunction_001)
		{
			//this is testing rectangle function using 
			int tempresult = 0;
			tempresult = analyzeRectangleside(1, 2, 1, 2);
			Assert::AreEqual(1, tempresult);
		}

		TEST_METHOD(RectangleFunction_002)
		{
			//this is testing rectangle function using
			int tempresult = 0;
			tempresult = analyzeRectangleside(2000, 2, 2000, 2);
			Assert::AreEqual(1, tempresult);
		}

		TEST_METHOD(RectangleFunction_003)
		{
			//this is testing rectangle function using
			int tempresult = 0;
			tempresult = analyzeRectangleside(10, 1000, 10, 1000);
			Assert::AreEqual(1, tempresult);
		}

		TEST_METHOD(RectangleFunction_004)
		{
			//this is testing rectangle function using 
			int tempresult = 0;
			tempresult = analyzeRectangleside(10000000000, 10, 10000000000, 10);
			Assert::AreEqual(1, tempresult);
		}

		TEST_METHOD(RectangleFunction_005)
		{
			//this is testing rectangle function using 
			int tempresult = 0;
			tempresult = analyzeRectangleside(5, 5, 5, 5);
			Assert::AreEqual(2, tempresult);
		}

		TEST_METHOD(RectangleFunction_006)
		{
			//this is testing rectangle function using 
			int tempresult = 0;
			tempresult = analyzeRectangleside(100000, 100000, 100000, 100000);
			Assert::AreEqual(2, tempresult);
		}

		TEST_METHOD(RectangleFunction_007)
		{
			//this is testing rectangle function using 
			int tempresult = 0;
			tempresult = analyzeRectangleside(0, 0, 0, -1);
			Assert::AreEqual(3, tempresult);
		}

		TEST_METHOD(RectangleFunction_008)
		{
			//this is testing rectangle function using 
			int tempresult = 0;
			tempresult = analyzeRectangleside(-1, -10, 0, 0);
			Assert::AreEqual(3, tempresult);
		}

		TEST_METHOD(RectangleFunction_009)
		{
			//this is testing rectangle function using 
			int tempresult = 0;
			tempresult = analyzeRectangleside(10, 2, 50, 1000);
			Assert::AreEqual(4, tempresult);
		}

		TEST_METHOD(RectangleFunction_010)
		{
			//this is testing rectangle function using 
			int tempresult = 0;
			tempresult = analyzeRectangleside(350, 50, 1, 10000);
			Assert::AreEqual(4, tempresult);
		}
	};
}