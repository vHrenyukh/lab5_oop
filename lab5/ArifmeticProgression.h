#pragma once
#include "Progression.h"
class ArifmeticProgression : public Progression
{
public:
	ArifmeticProgression();
	ArifmeticProgression(double startPoint, double difference);
	
	double progressionSum(double n) override;
	 
	
};

