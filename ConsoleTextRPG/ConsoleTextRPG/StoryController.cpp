#include "StoryController.h"

vector<string> StoryController::storyTexts;

void StoryController::SettupCampaign(string storyTextFile)
{
	fstream file;
	file.open(storyTextFile);
	if (file.is_open())
	{
		string lineOfText;
		while (getline(file, lineOfText))
		{
			storyTexts.push_back(lineOfText);
		}
		file.close();
	}
	else
	{
		cout << "I DID NOT FOUND THE FILE\n";
		exit(0);
	}
}

string StoryController::GetCampaignText(int textIndex)
{
	return storyTexts[textIndex];
}
