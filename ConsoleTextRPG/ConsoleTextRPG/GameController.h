#include <iostream>
#include <random>
#include <string>
#include "FeoData.cpp"

using namespace std;

const struct FeoData oponentsData[] = {
	{"Wolf", 85, 76, 8, 14, 10, 18}
};

#pragma once
class GameController
{
public:
	static int GenerateNumber(int minValue, int maxValue);
	static FeoData GetOponentData(string oponentName);
	static int HandleInputChoice(int maxOption);
};