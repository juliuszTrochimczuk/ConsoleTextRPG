#include <iostream>
#include <random>
#include <string>
#include <vector>
#include <fstream>
#include "FeoData.cpp"

using namespace std;

const struct FeoData oponentsData[] = {
	{"Wolf", 85, 76, 8, 14, 10, 18}
};

#pragma once
class GameController
{
private:
	vector<string> bountyCampaignTexts;
public:
	static int GenerateNumber(int minValue, int maxValue);
	static FeoData GetOponentData(string oponentName);
	static int HandleInputChoice(int maxOption);
	void SettupCampaign(string whichCampaign);
	string GetCampaignText(int whichCampaign, int index);
};

