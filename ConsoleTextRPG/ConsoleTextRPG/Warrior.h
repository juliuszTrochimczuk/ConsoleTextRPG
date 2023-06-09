#include <iostream>
#include "Player.h"

using namespace std;

#pragma once
class Warrior : public Player
{
protected:
	string ActionCommunicate() override;
	int BasicAttack() override;
	int PowerAttack() override;
public:
	Warrior();
};
