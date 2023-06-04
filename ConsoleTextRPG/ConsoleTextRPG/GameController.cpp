#include "GameController.h"

int GameController::GenerateNumber(int minValue, int maxValue)
{
	random_device rd;
	uniform_int_distribution<int> dist(minValue, maxValue);

	//int random_die_roll = dist(rd);
	//srand(time(NULL));
	//int randomNumber = rand() % (maxValue - minValue + 1) + minValue;
	return dist(rd);
}
