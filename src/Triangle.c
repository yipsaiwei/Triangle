#include "Triangle.h"

checkType checkNegativeOrZero(int , int , int );
// TDD = Test-Driven Development
// 1. Write test (next test)
// 2. Write code to pass the test
// 3. Run test; if test failing, go to step 2
// 4. Go to step 1

/**
	* Find out if a given triangle is one of thefollowing types
	*	isoceles = 2 has equal sides
	*	scalene  = no equal sides
	*	equilateral	= all has equal sides
*/


TriangleType getTriangleType(int side1, int side2, int side3)
{
	int	check;
	check=checkNegativeOrZero(side1, side2, side3);
	if (check==INVALID)
		return UNKNOWN;
	if (side1==side2||side2==side3||side1==side3)
	{
		if (side1==side3&&side3==side2)
			return EQUILATERAL;
		else
			return ISOCELES;
	}
	else
		return SCALENE;

}

checkType checkNegativeOrZero(int side1, int side2, int side3)
{
	if(side1<=0||side2<=0||side3<=0)
		return INVALID;
	else
		return VALID;
}
		