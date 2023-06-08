#include "GameController.h"

int GameController::GenerateNumber(int minValue, int maxValue)
{
	random_device rd;
	uniform_int_distribution<int> dist(minValue, maxValue);
	return dist(rd);
}

FeoData GameController::GetOponentData(string oponentName)
{
	for (int i = 0; i < sizeof(oponentsData); i++)
	{
		if (oponentsData[i].name == oponentName)
		{
			return oponentsData[i];
		}
	}
	cout << "DOSEN'T FIND ENEMY: " + oponentName << endl;
	exit(0);
}
