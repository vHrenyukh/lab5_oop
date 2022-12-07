
#include <iostream>
#include "ArifmeticProgression.h"
#include "GeometricProgression.h"
using namespace std;

int main()
{
	Progression* geometricProgression = new GeometricProgression(1, 3);
	Progression* arifmeticProgression = new ArifmeticProgression(1, 3);

	cout << "Sum of Arifmetic Progression = " << arifmeticProgression->progressionSum(3) << endl;
	cout << "Sum of Geometric Progression = " << geometricProgression->progressionSum(3) << endl;

	delete geometricProgression;
	delete arifmeticProgression;

}