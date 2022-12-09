#pragma once
void printWelcome();
int printShapeMenu();
int* getTriangleSides(int* triangleSides);
int* getRectanglePoints(int* rectanglePoints);

//rectangle functions
int* analyzeRectanglepoints(int* rectangleSides, int point1x, int point1y, int point2x, int point2y, int point3x, int point3y, int point4x, int point4y);

char* analyzeRectangleside(int side1, int side2, int side3, int side4);

void parameter(int side1, int side2, int side3, int side4);
//triangle functions
char* analyzeTriangle(int side1, int side2, int side3);