#include <stdio.h>
#include <stdbool.h>

#include "rectangleSolver.h"

char* analyzeRectangle(int side1, int side2, int side3, int side4) {
	char* rectangleresult = "";
	if (side1 == side3 && side2 == side4 && side1 != side2 && side3 != side4) {
		rectangleresult = "Rectangle";
		int area = side1 * side2;
		printf_s("Area = %d\n", area);
	}
	else if (side1 == side2 && side3 == side4) {
		rectangleresult = "Square";
	}
	else {
		rectangleresult = "Irregular Quadrilateral";
	}

	return rectangleresult;
}

void parameter(int side1, int side2, int side3, int side4) {
	int parameter = side1 + side2 + side3 + side4;
	printf_s("The parameter is %d", parameter);
}