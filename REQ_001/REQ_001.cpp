#include "pch.h"
#include "CppUnitTest.h"

extern "C" int analyzeTriangle(int, int, int);
extern "C" int main();
extern "C" int triangleangles(int, int, int);


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ001
{
	TEST_CLASS(REQ001)
	{
	public:
		
		TEST_METHOD(TriangleFunction_001)
		{
			//this is testing triangle function using 
			int tempresult = 0;
			tempresult = analyzeTriangle(-10, 0, 0);
			Assert::AreEqual(1, tempresult);
		}

		TEST_METHOD(TriangleFunction_002)
		{
			//this is testing triangle function using
			int tempresult = 0;
			tempresult = analyzeTriangle(10, -10, 30);
			Assert::AreEqual(1, tempresult);
		}

		TEST_METHOD(TriangleFunction_003)
		{
			//this is testing triangle function using
			int tempresult = 0;
			tempresult = analyzeTriangle(50, 5, -10);
			Assert::AreEqual(1, tempresult);
		}

		TEST_METHOD(TriangleFunction_004)
		{
			//this is testing triangle function using 
			int tempresult = 0;
			tempresult = analyzeTriangle(10, -10, 3000000000000);
			Assert::AreEqual(1, tempresult);
		}
		
		TEST_METHOD(TriangleFunction_005)
		{
			//this is testing triangle function using 
			int tempresult = 0;
			tempresult = analyzeTriangle(-10, -5, -50);
			Assert::AreEqual(1, tempresult);
		}

		TEST_METHOD(TriangleFunction_006)
		{
			//this is testing triangle function using 
			int tempresult = 0;
			tempresult = analyzeTriangle(10, 10, 10);
			Assert::AreEqual(2, tempresult);
		}

		TEST_METHOD(TriangleFunction_007)
		{
			//this is testing triangle function using 
			int tempresult = 0;
			tempresult = analyzeTriangle(100000000000, 100000000000, 30);
			Assert::AreEqual(3, tempresult);
		}

		TEST_METHOD(TriangleFunction_008)
		{
			//this is testing triangle function using 
			int tempresult = 0;
			tempresult = analyzeTriangle(10, 10, 30);
			Assert::AreEqual(3, tempresult);
		}

		TEST_METHOD(TriangleFunction_009)
		{
			//this is testing triangle function using 
			int tempresult = 0;
			tempresult = analyzeTriangle(10, 2, 50);
			Assert::AreEqual(4, tempresult);
		}

		TEST_METHOD(TriangleFunction_010)
		{
			//this is testing triangle function using 
			int tempresult = 0;
			tempresult = analyzeTriangle(10000000000, 50, 10);
			Assert::AreEqual(4, tempresult);
		}

		TEST_METHOD(TriangleAngleFunction_001)
		{
			//this is testing triangle angle function using 
			int gamma = 0;
			gamma = triangleangles(10, 20, 30);
			Assert::AreEqual(90, gamma);
		}
	};
}
