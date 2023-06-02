#include <iostream>
#include <cstdlib>
#include "Character.h"

using namespace std;

#pragma once
class Foe : public Character
{
protected:
	string BlockCommunicate() override;
public:
	string name;
	Foe(string _name, int _health, int defensive);
	void Death() override;
	int DrawAction();
};

