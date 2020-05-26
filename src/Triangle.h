#ifndef TRIANGLE_H
#define TRIANGLE_H

typedef enum
{
	// 0	   1	         2	      3
	UNKNOWN, EQUILATERAL, ISOCELES, SCALENE
}TriangleType;

typedef enum
{
	INVALID, VALID
}checkType;

TriangleType getTriangleType(int side1, int side2, int side3);
checkType	checkNegativeOrZero(int side1, int side2, int side3);
#endif // TRIANGLE_H
