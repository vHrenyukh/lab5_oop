#pragma once
#include"Progression.h"
#include<math.h>
class GeometricProgression : public Progression
{
public:
	GeometricProgression();
	GeometricProgression(double startPoint, double relation);
	double progressionSum(double n) override;
};

