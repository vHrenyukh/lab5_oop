#pragma once
class Progression
{
protected:
	const double startPoint = 0;
	const double step = 0;
	
public:
	Progression();
	Progression(double startPoint, double step);

	virtual double progressionSum(double n) = 0;
	

};

