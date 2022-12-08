#include "pch.h"
#include "CppUnitTest.h"

extern "C" int triangleangles(int side1, int side2, int side3);

// TRI_002: Testing for angles of triangle

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TRI002
{
	TEST_CLASS(TRI002)
	{
	public:

		TEST_METHOD(TypeOfTriangleAngle)
		{
			//This is testing the triangleangles Function
			int Result = 0;
			Result = triangleangles(0, 0, 0);
			Assert::AreEqual(0, Result);
		}

		TEST_METHOD(TypeOfTriangleAngle2)
		{
			//This is testing the triangleangles Function
			int Result = 0;
			Result = triangleangles(0, 0, 0);
			Assert::AreEqual(0, Result);
		}

		TEST_METHOD(TypeOfTriangleAngle3)
		{
			//This is testing  the triangleangles Function
			int Result = 0;
			Result = triangleangles(0, 0, 0);
			Assert::AreEqual(0, Result);
		}
	};
}
