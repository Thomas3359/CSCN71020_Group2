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
			tempresult = analyzeTriangle(-10, -5, -50);
			Assert::AreEqual(1, tempresult);
		}

		TEST_METHOD(TriangleFunction_005)
		{
			//this is testing triangle function using 
			int tempresult = 0;
			tempresult = analyzeTriangle(10, 10, 10);
			Assert::AreEqual(2, tempresult);
		}

		TEST_METHOD(TriangleFunction_006)
		{
			//this is testing triangle function using 
			int tempresult = 0;
			tempresult = analyzeTriangle(10, 10, 30);
			Assert::AreEqual(3, tempresult);
		}

		TEST_METHOD(TriangleFunction_007)
		{
			//this is testing triangle function using 
			int tempresult = 0;
			tempresult = analyzeTriangle(10, 2, 50);
			Assert::AreEqual(4, tempresult);
		}

		TEST_METHOD(TriangleAngleFunction_001)
		{
			//this is testing triangle angle function using 
			int total1 = 0;
			total1 = triangleangles(50, 70, 50);
			Assert::AreEqual(180, total1);
		}
		TEST_METHOD(TriangleAngleFunction_002)
		{
			//this is testing triangle angle function using 
			int total = 0;
			total = triangleangles(100, 250, 320);
			Assert::AreEqual(180, total);
		}
		TEST_METHOD(TriangleAngleFunction_003)
		{
			//this is testing triangle angle function using 
			int total = 0;
			total = triangleangles(10, 20, 30);
			Assert::AreEqual(180, total);
		}
	};
}
