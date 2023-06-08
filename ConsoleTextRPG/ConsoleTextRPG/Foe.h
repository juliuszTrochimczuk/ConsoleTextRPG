#include <iostream>
#include <cstdlib>
#include "Character.h"
#include "FeoData.cpp"

using namespace std;

#pragma once
class Foe : public Character
{
private:
	int minBaseAttack;
	int maxBaseAttack;
	int minPowerAttack;
	int maxPowerAttack;
protected:
	string BlockCommunicate() override;
public:
	string name;
	Foe(FeoData data);
	void Death() override;
	int DrawAction();
};
