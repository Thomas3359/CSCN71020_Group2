#include <stdio.h>
#include <stdbool.h>

#include "main.h"

int side = 0;

int main() {
	bool continueProgram = true;
	while (continueProgram) {
		printWelcome();

		int shapeChoice = printShapeMenu();

		switch (shapeChoice)
		{
		case 1:
			printf_s("Triangle selected.\n");
			int triangleSides[3] = { 0, 0, 0 };
			int* triangleSidesPtr = getTriangleSides(triangleSides);
			char* result = analyzeTriangle(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);
			printf_s("%s\n", result);
			break;
		case 2:
			printf_s("Rectangle selected.\n");
			int rectanglePoints[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
			int rectangleSides[4] = { 0, 0, 0, 0 };
			int* rectanglePointsPtr = getRectanglePoints(rectanglePoints);
			int* rectangleSidesPtr = analyzeRectanglepoints(rectangleSides , rectanglePointsPtr[0], rectanglePointsPtr[1], rectanglePointsPtr[2], rectanglePointsPtr[3], rectanglePointsPtr[4], rectanglePointsPtr[5], rectanglePointsPtr[6], rectanglePointsPtr[7]);
			char* rectangleresultsides = analyzeRectangleside(rectangleSidesPtr[0], rectangleSidesPtr[1], rectangleSidesPtr[2], rectangleSidesPtr[3]);
			printf_s("%s\n", rectangleresultsides);
			parameter(rectangleSidesPtr[0], rectangleSidesPtr[1], rectangleSidesPtr[2], rectangleSidesPtr[3]);
			break;
		case 0:
			continueProgram = false;
			break;
		default:
			printf_s("Invalid value entered.\n");
			break;
		}
	}
	return 0;
}

void printWelcome() {
	printf_s("\n");
	printf_s(" **********************\n");
	printf_s("**     Welcome to     **\n");
	printf_s("**   Polygon Checker  **\n");
	printf_s(" **********************\n");
}

int printShapeMenu() {
	printf_s("1. Triangle\n");
	printf_s("2. Rectangle\n");
	printf_s("0. Exit\n");

	int shapeChoice;

	printf_s("Enter number: ");
	scanf_s("%1o", &shapeChoice);

	return shapeChoice;
}

int* getTriangleSides(int* triangleSides) {
	printf_s("Enter the three sides of the triangle: ");
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &triangleSides[i]);
	}
	return triangleSides;
}

int* getRectanglePoints(int* rectanglePoints) {
	printf_s("Enter the four points of the rectangle in x,y form\n");
	for (int j = 1; j < 5; j++)
	{
		printf_s("Point%d: ", j);
		for (int i = 0; i < 2; i++)
		{
			scanf_s("%d", &rectanglePoints[i]);
		}
	}
	return  rectanglePoints;
}