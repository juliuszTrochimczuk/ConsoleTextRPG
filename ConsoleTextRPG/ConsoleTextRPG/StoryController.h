#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

#pragma once
class StoryController
{
private:
	static vector<string> storyTexts;
public:
	static void SettupCampaign(string storyTextFile);
	static string GetCampaignText(int textIndex);
};

