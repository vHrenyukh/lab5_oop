#include "ArifmeticProgression.h"

ArifmeticProgression::ArifmeticProgression()
{
}

ArifmeticProgression::ArifmeticProgression(double startPoint, double difference) : Progression(startPoint, difference)
{
}



double ArifmeticProgression::progressionSum(double n)
{
    return ((2 * startPoint + (step * (n - 1)) / 2) * n);
}
