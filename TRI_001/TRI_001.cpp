#include "pch.h"
#include "CppUnitTest.h"

extern "C" int analyzeTriangle(int side1, int side2, int side3);

// TRI_001: Testing for type of triangle

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TRI001
{
	TEST_CLASS(TRI001)
	{
	public:
		
		TEST_METHOD(TypeOfTriangle)
		{
			//This is testing the "Equilateral triangle" portion of the analyzeTriangle Function
			int Result = 0;
			Result = analyzeTriangle(0, 0, 0);
			Assert::AreEqual(0, Result);
		}

		TEST_METHOD(TypeOfTriangle2)
		{
			//This is testing the "Isosceles triangle" portion of the analyzeTriangle Function
			int Result = 0;
			Result = analyzeTriangle(0, 0, 0);
			Assert::AreEqual(0, Result);
		}

		TEST_METHOD(TypeOfTriangle3)
		{
			//This is testing the "Scalene triangle" portion of the analyzeTriangle Function
			int Result = 0;
			Result = analyzeTriangle(0, 0, 0);
			Assert::AreEqual(0, Result);
		}
		TEST_METHOD(TypeOfTriangle4)
		{
			//This is testing the "Not A Triangle" portion of the analyzeTriangle Function
			int Result = 0;
			Result = analyzeTriangle(0, 0, 0);
			Assert::AreEqual(0, Result);
		}
	};
}
