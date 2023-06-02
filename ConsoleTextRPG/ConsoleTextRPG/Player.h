#include <iostream>
#include "Character.h"

using namespace std;

#pragma once
class Player : public Character
{
protected:
	virtual string ActionCommunicate();
	string BlockCommunicate() override;
	virtual int BasicAttack();
	virtual int PowerAttack();
public:
	int MakeAction();
	int GetHealth();
	void Death() override;
};

