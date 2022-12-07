#include "GeometricProgression.h"

GeometricProgression::GeometricProgression()
{
}

GeometricProgression::GeometricProgression(double startPoint, double relation) : Progression(startPoint, relation)
{
	
}

double GeometricProgression::progressionSum(double n)
{
	return (startPoint * (pow(step, n) - 1) / (step -1));
}
