#include <stdio.h>
#include <stdbool.h>

#include "main.h"
#include "math.h"

#define PI 3.14159265358979323846

int* triangleangles(int side1, int side2, int side3)
{

	float alpha = acos((side2 + side3 - side1) / (2 * sqrt(side2) * sqrt(side3)));
	float beta = acos((side1 + side3 - side2) / (2 * sqrt(side1) * sqrt(side3)));
	float gamma = acos((side1 + side2 - side3) / (2 * sqrt(side1) * sqrt(side2)));

	alpha = alpha * 180 / PI;
	beta = beta * 180 / PI;
	gamma = gamma * 180 / PI;
	float total = alpha + beta + gamma;
	if (total == 180)
	{
		printf_s("angle 1 = %lf \nangle 2 = %lf \nangle 3 = %lf\n", alpha, beta, gamma);
	}
}

char* analyzeTriangle(int side1, int side2, int side3) {
	char* result = "";
	int tempresult;
	if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
		result = "Not a triangle";
		tempresult = 1;

	}
	else if (side1 == side2 && side1 == side3) {
		result = "Equilateral triangle";
		tempresult = 2;

	}
	else if ((side1 == side2 && side1 != side3) || (side1 == side3 && side1 != side2))
	{
		result = "Isosceles triangle";
		tempresult = 3;
	}
	else {
		result = "Scalene triangle";
		tempresult = 4;
	}
	triangleangles(side1, side2, side3);
	return result, tempresult;
}