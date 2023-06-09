#include <iostream>
#include "Player.h"

using namespace std;

#pragma once
class Hunter : public Player
{
protected:
	string ActionCommunicate() override;
	int BasicAttack() override;
	int PowerAttack() override;
public:
	Hunter();
};

