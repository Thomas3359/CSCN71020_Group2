#include <stdio.h>
#include <stdbool.h>

#include "main.h"

int* analyzeRectanglepoints(int* rectangleSides, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {

	rectangleSides[0] = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
	rectangleSides[1] = ((x2 - x3) * (x2 - x3)) + ((y2 - y3) * (y2 - y3));
	rectangleSides[2] = ((x4 - x3) * (x4 - x3)) + ((y4 - y3) * (y4 - y3));
	rectangleSides[3] = ((x4 - x1) * (x4 - x1)) + ((y4 - y1) * (y4 - y1));

	return rectangleSides;
} 


char* analyzeRectangleside(int side1, int side2, int side3, int side4) {
	char* rectangleresult = "";
	int tempresult;
	if (side1 == side3 && side2 == side4 && side1 != side2 && side3 != side4) {
		rectangleresult = "Rectangle";
		int area = side1 * side2;
		printf_s("Area = %d\n", area);
		tempresult = 1;

	}
	else if (side1 == side2 && side3 == side4) {
		rectangleresult = "Square";
		tempresult = 2;

	}
	else if (side1 <=0 || side2 <=0 || side3<=0 || side4<=0) {
		rectangleresult = "Not a real rectangle";
		tempresult = 3;

	}
	else {
		rectangleresult = "Irregular Quadrilateral";
		tempresult = 4;

	}

	return rectangleresult;
}


void parameter(int side1, int side2, int side3, int side4) {
	int parameter = side1 + side2 + side3 + side4;
	printf_s("The parameter is %d", parameter);
}