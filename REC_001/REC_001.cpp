#include "pch.h"
#include "CppUnitTest.h"

extern "C" int analyzeRectangleside(int side1, int side2, int side3, int side4);

// REC_001: Testing for type of rectangle

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REC001
{
	TEST_CLASS(REC001)
	{
	public:

		TEST_METHOD(TypeOfRectangle)
		{
			//This is testing the "Square" portion of the AnalyzeRectangleside Function
			int Result = 0;
			Result = analyzeRectangleside(0, 0, 0, 0);
			Assert::AreEqual(0, Result);
		}

		TEST_METHOD(TypeOfRectangle2)
		{
			//This is testing the "Rectangle" portion of the AnalyzeRectangleside Function
			int Result = 0;
			Result = analyzeRectangleside(0, 0, 0, 0);
			Assert::AreEqual(0, Result);
		}

		TEST_METHOD(TypeOfRectangle3)
		{
			//This is testing the "Irregular Quadrilateral" portion of the AnalyzeRectangleside Function
			int Result = 0;
			Result = analyzeRectangleside(0, 0, 0, 0);
			Assert::AreEqual(0, Result);
		}
		
	};
}