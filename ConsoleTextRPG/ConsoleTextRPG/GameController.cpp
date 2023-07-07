#include "GameController.h"

extern vector<string> bountyCampaignTexts;

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

int GameController::HandleInputChoice(int maxOption)
{
	string typedOption;
	int numericOption;
	cin >> typedOption;
	while (true)
	{
		try
		{
			numericOption = stoi(typedOption);
			if (numericOption != 0 && numericOption <= maxOption)
			{
				break;
			}
			else
			{
				cout << "Wrong option. Please type again.\n";
				cin >> typedOption;
			}
		}
		catch (exception ex)
		{
			cout << "Wrong option. Please type again.\n";
			cin >> typedOption;
		}
	}
	return numericOption;
}

void GameController::SettupCampaign(string whichCampaign)
{
	fstream file;
	file.open(whichCampaign);
	if (file.is_open())
	{
		string lineOfText;
		while (getline(file, lineOfText))
		{
			bountyCampaignTexts.push_back(lineOfText);
		}
		file.close();
	}
	else
	{
		cout << "I DID NOT FOUND THE FILE\n";
		exit(0);
	}
}

string GameController::GetCampaignText(int whichCampaign, int index)
{
	string textToReturn;
	if (whichCampaign == 1)
	{
		textToReturn = bountyCampaignTexts[index];
	}
	return textToReturn;
}
