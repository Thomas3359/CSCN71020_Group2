#include <stdio.h>
#include <stdbool.h>

#include "main.h"
#include "math.h"

#define PI 3.14159265358979323846

int* triangleangles(int side1, int side2, int side3)
{
	int alpha = 0;
	int beta = 0;
	int gamma = 0;
	int getalpha(side1, side2, side3, alpha);
	int getbeta(side1, side2, side3, beta);
	int getgamma(side1, side2, side3, gamma);
	
	int total = alpha + beta + gamma;
	if (total == 180)
	{
		printf("angle 1 = %d \nangle 2 = %d \nangle 3 = %d\n", alpha, beta, gamma);
	}
	return alpha, beta, gamma;
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

int getalpha(int side1, int side2, int side3, int alpha) {
	alpha = acos((side2 + side3 - side1) / (2 * sqrt(side2) * sqrt(side3)));
	alpha = alpha * 180 / PI;
	return alpha;
}
int getbeta(int side1, int side2, int side3, int beta) {
	beta = acos((side1 + side3 - side2) / (2 * sqrt(side1) * sqrt(side3)));
	beta = beta * 180 / PI;
	return beta;
}
int getgamma(int side1, int side2, int side3, int gamma) {
	gamma = acos((side1 + side2 - side3) / (2 * sqrt(side1) * sqrt(side2)));
	gamma = gamma * 180 / PI;
	return gamma;
}

