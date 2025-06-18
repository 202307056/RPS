#include "Random.h"

#include <stdlib.h>
#include <time.h>

Random::Random()
{
	srand(time(NULL));
}

int Random::GetRandom(int scope)
{
	return rand() % scope;
}